package com.web;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
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
 * Servlet implementation class adminAddProductSerclet
 */
public class adminAddProductSerclet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//������������
		response.setContentType("text/html;charset=UTF-8");
		//��ȡ����
		Map<String,String[]> properties = request.getParameterMap();
		
		//��װ����
		Product product = new Product();
	
				try {
					BeanUtils.populate(product, properties);
				} catch (Exception e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
		//�ֶ����ñ���û�е����� pid,pimage,pdate,pflag(��Ʒ�Ƿ��¼�)
		product.setPid(UUID.randomUUID().toString());
		product.setPimage("products/1/c_0014.jpg");
		SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd");
		String pdate = format.format(new Date());
		product.setPdate(pdate);
		product.setPflag(0);
		//��������
		adminService service = new adminService();
		try {
			service.addProduct(product);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		//�����ض�������
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
