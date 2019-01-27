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
		//������������
		request.setCharacterEncoding("UTF-8");
		//1,��ò���
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		User user = login(username,password);
		System.out.println("aaa");
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
