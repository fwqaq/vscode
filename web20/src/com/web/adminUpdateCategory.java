package com.web;

import java.io.IOException;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.service.adminService;

/**
 * Servlet implementation class adminUpdateCategory
 */
public class adminUpdateCategory extends HttpServlet {
	private static final long serialVersionUID = 1L;
       

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//设置中文乱码
		request.setCharacterEncoding("UTF-8");
		//得到表单的数据
		//对数据进行传递
		String cid = request.getParameter("cid");
		String cname = request.getParameter("cname");
		
		adminService service = new adminService();
		try {
			service.updateCategoryById(cid,cname);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		//进行网页的转发
		response.sendRedirect(request.getContextPath()+"/adminCategory");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
