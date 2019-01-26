package cdx;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class servlet
 */
public class servlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//1,没有响应，告知客服端重定向到servlet1
		//设置状态码
		//response.setStatus(302);
		//2，设置响应头location
		//response.setHeader("location", "/web14/servlet1");
		//封装的重定向的方法sendRedrict()传入参数重定向的地址
		//response.sendRedirect("/web14/servlet1");
		
		//设置定时刷新
		response.setHeader("refresh", "5;url=http://www.baidu.com");//5是延时单位是s
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
