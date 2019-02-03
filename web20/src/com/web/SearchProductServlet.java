package com.web;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.sql.SQLException;
import java.util.List;
import java.util.Map;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.beanutils.BeanUtils;

import com.domain.Condition;
import com.domain.Product;
import com.service.adminService;

/**
 * Servlet implementation class SearchProductServlet
 */
public class SearchProductServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//������������
		response.setContentType("text/html;charset=UTF-8");
			//1�����ʵ��Ĳ����б�
		Map<String,String[]> properties =  request.getParameterMap();
		System.out.println(properties);
		Condition condition = new Condition();
		try {
			BeanUtils.populate(condition, properties);
		} catch (IllegalAccessException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (InvocationTargetException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
			//2,���������з�װʵ��
			//3�����ݲ�����adminService��
		adminService service = new adminService();
		List<Product> list= null;
		try {
					list = (List<Product>) service.SearchProduct(condition);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		//�����ض���ת�뵽list.jspҳ��
		//������
		request.setAttribute("productList", list);
		request.getRequestDispatcher("/admin/product/list.jsp").forward(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
