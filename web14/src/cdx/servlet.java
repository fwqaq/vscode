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
		//1,û����Ӧ����֪�ͷ����ض���servlet1
		//����״̬��
		//response.setStatus(302);
		//2��������Ӧͷlocation
		//response.setHeader("location", "/web14/servlet1");
		//��װ���ض���ķ���sendRedrict()��������ض���ĵ�ַ
		//response.sendRedirect("/web14/servlet1");
		
		//���ö�ʱˢ��
		response.setHeader("refresh", "5;url=http://www.baidu.com");//5����ʱ��λ��s
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
