package login;

import java.io.IOException;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanListHandler;


import getsource.c3p0utils;

public class Login extends HttpServlet {
	private static final long serialVersionUID = 1L;


	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//������������
		HttpSession session = request.getSession();
		request.setCharacterEncoding("UTF-8");
		//��֤���У��
		String checkCode = request.getParameter("checkCode");//����������֤��
		String checkCode_session = (String) request.getSession().getAttribute("checkcode_session");
		if(!checkCode.equals(checkCode_session))
		{
			request.setAttribute("Errorinfor", "��֤�����");
			request.getRequestDispatcher("/login.jsp").forward(request, response);
			return;
		}
		
		//1,��ò���
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		ArrayList<User> user = login(username,password);
		session.setAttribute("user", user);
		if(user!=null)
		{
			//�û�����ȷ���û��ض�����뵽��ҳ��ȥ
			response.sendRedirect(request.getContextPath());
		}
		else {
			//�û������󣬵�½���ɹ����ڵ�½λ����ʾ������Ϣ
			//����ת��ִ����һ��
			//�洢������Ϣ
			request.setAttribute("Errorinfor", "�û��������������");
			request.getRequestDispatcher("/login.jsp").forward(request, response);
		}
	}
	/*
	 * ���ݿ���֤����
	 */
	public ArrayList<User> login(String username,String password) {
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from user where username=? and password=?";
		ArrayList<User> user = null;
		try {
			user =  (ArrayList<User>) qr.query(sql, new BeanListHandler<User>(User.class),username,password);
		
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
