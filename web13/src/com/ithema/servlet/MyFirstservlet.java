package com.ithema.servlet;

import java.io.IOException;

import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

public class MyFirstservlet implements Servlet{

	
	@Override//���������û�����Ӧ��
	public void service(ServletRequest arg0, ServletResponse arg1) throws ServletException, IOException {
		// TODO Auto-generated method stub
		System.out.println("one  running......");
	}
	
	@Override
	public void destroy() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public ServletConfig getServletConfig() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getServletInfo() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void init(ServletConfig arg0) throws ServletException {
		// TODO Auto-generated method stub
	
	}

}
