package login;

import java.io.IOException;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;

import domain.User;
import getsource.c3p0utils;

public class Myservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub

		//username=zhangsan&password=123
		
		//1、获得用户名和密码
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		
		//2、从数据库中验证该用户名和密码是否正确
		QueryRunner runner = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from user where username=? and password=?";
		User user = null;
		try {
			user = runner.query(sql, new BeanHandler<User>(User.class), username,password);
		} catch (SQLException e) {
			e.printStackTrace();
		}
		
		//3、根据返回的结果给用户不同显示信息
		if(user!=null){
		
			//用户登录成功
			response.getWriter().write(user.toString()+"---you are success login person ：");
		
		}else{
			//用户登录失败
			response.getWriter().write("sorry your username or password is wrong");
		}
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	@Override
	public void init() throws ServletException {
		// TODO Auto-generated method stub
		System.out.println("aaa");
	}
    private void destory() {
		// TODO Auto-generated method stub
    	System.out.println("assad");
	}
}
