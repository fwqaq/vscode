package com.web;

import java.io.IOException;
import java.sql.SQLException;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.domain.Category;
import com.domain.Product;
import com.service.adminService;

/**
 * Servlet implementation class UpdateShowProductServlet
 */
public class UpdateShowProductServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
  

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//得到pid的值
		String pid = request.getParameter("pid");
		//传递参数pid
		adminService service = new adminService();
		Product product =null;
		try {
			product = service.updateShowProduct(pid);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		List<Category> category = null;
		try {
			category = service.findAllCategory();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		//进行重定向并且存储在request域中
		request.setAttribute("category", category);
		//将数据传递到request中进行回显
		request.setAttribute("product", product);
		//进行转发
		request.getRequestDispatcher("/admin/product/edit.jsp").forward(request, response);
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
