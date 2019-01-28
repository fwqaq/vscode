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
		//设置中文乱码
		response.setContentType("text/html;charset=UTF-8");
		//1,获取当前时间并且写入到Cookie中发送给客户端
		Date time = new Date();
		SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
		String time1 = format.format(time);
		//1.1创建一个Cookie对象设置时间
		Cookie cookie = new Cookie("lastTime", time1);
		//1.2将Cookie设置持久化时间
		cookie.setMaxAge(60*60*10);
		response.addCookie(cookie);
		
		//2,客户端接受Cookie并且显示给客户
		//2.1从客户端获取当前的Cookie对象
		Cookie[] cookies = request.getCookies();
		String getTime;
		if(cookies!=null) {
			for(Cookie cookie1:cookies)
			{
				if(cookie1.getName().equals("lastTime"))
				{
					getTime = cookie1.getValue();
					response.getWriter().write("您上次访问时间是："+getTime);
					break;
				}
			}

		}
		else {
			response.getWriter().write("您是第一次访问");
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
