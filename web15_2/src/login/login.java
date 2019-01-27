package login;

import java.io.IOException;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanListHandler;


import getsource.c3p0utils;

public class login extends HttpServlet {
	private static final long serialVersionUID = 1L;


	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//设置中文乱码
		request.setCharacterEncoding("UTF-8");
		//1,获得参数
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		User user = login(username,password);
		System.out.println("aaa");
		if(user!=null)
		{
			//用户名正确，用户重定向进入到首页中去
			response.sendRedirect(request.getContextPath());
			
		}
		else {
			//用户名错误，登陆不成功，在登陆位置显示错误信息
			//运用转发执行下一步
			//存储错误信息
			request.setAttribute("Errorinfor", "用户名或者密码错误");
			request.getRequestDispatcher("/login.jsp").forward(request, response);
		}
		
	}
	/*
	 * 数据库验证函数
	 */
	public User login(String username,String password) {
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from user where username=? and password=?";
		User user = null;
		try {
			user = (User) qr.query(sql, new BeanListHandler<User>(User.class),username,password);
		
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return user;
	}
	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
