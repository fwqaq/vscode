package Cookie;

import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class TimeServlet
 */
public class TimeServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//������������
		response.setContentType("text/html;charset=UTF-8");
		//1,��ȡ��ǰʱ�䲢��д�뵽Cookie�з��͸��ͻ���
		Date time = new Date();
		SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
		String time1 = format.format(time);
		//1.1����һ��Cookie��������ʱ��
		Cookie cookie = new Cookie("lastTime", time1);
		//1.2��Cookie���ó־û�ʱ��
		cookie.setMaxAge(60*60*10);
		response.addCookie(cookie);
		
		//2,�ͻ��˽���Cookie������ʾ���ͻ�
		//2.1�ӿͻ��˻�ȡ��ǰ��Cookie����
		Cookie[] cookies = request.getCookies();
		String getTime;
		if(cookies!=null) {
			for(Cookie cookie1:cookies)
			{
				if(cookie1.getName().equals("lastTime"))
				{
					getTime = cookie1.getValue();
					response.getWriter().write("���ϴη���ʱ���ǣ�"+getTime);
					break;
				}
			}

		}
		else {
			response.getWriter().write("���ǵ�һ�η���");
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
