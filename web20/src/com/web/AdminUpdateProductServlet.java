package com.web;

import java.io.IOException;
import java.sql.SQLException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Map;
import java.util.UUID;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.beanutils.BeanUtils;

import com.domain.Product;
import com.service.adminService;

/**
 * Servlet implementation class AdminUpdateProductServlet
 */
public class AdminUpdateProductServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       


	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//1，接受数据
		request.setCharacterEncoding("UTF-8");
		//获取数据
		Map<String,String[]> properties = request.getParameterMap();
		
		//封装数据
		Product product = new Product();
	
				try {
					BeanUtils.populate(product, properties);
				} catch (Exception e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
		//手动设置表单中没有的数据 pid,pimage,pdate,pflag(商品是否下架)
		product.setPimage("products/1/c_0014.jpg");
		SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd");
		String pdate = format.format(new Date());
		product.setPdate(pdate);
		product.setPflag(0);
		//2，传递数据
		adminService service  = new adminService();
		try {
			service.updateProduct(product);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		//转发
		response.sendRedirect(request.getContextPath()+"/adminServlet");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
