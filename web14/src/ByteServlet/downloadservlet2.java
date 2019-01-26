package ByteServlet;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.URLEncoder;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import sun.misc.BASE64Encoder;

/**
 * Servlet implementation class downloadServlet
 */
public class downloadservlet2 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//****中文文件下载
		//1，获得文件下载的文件名
		String filename = request.getParameter("filename");
		//下载文件的类型--
		filename = new String(filename.getBytes("ISO8859-1"),"UTF-8");//对文件名进行编码
		
		//通过request去得到客服端的浏览器的类型
		String agent = request.getHeader("User-Agent");
		//通过不同的类型设置编码的方式
		String filenameEncoder = "";
		if (agent.contains("MSIE")) {
				// IE浏览器
			filenameEncoder = URLEncoder.encode(filename, "utf-8");
			filenameEncoder = filenameEncoder.replace("+", " ");
		} else if (agent.contains("Firefox")) {
				// 火狐浏览器
		BASE64Encoder base64Encoder = new BASE64Encoder();
		filenameEncoder = "=?utf-8?B?"
						+ base64Encoder.encode(filename.getBytes("utf-8")) + "?=";
		} else {
				// 其它浏览器
			filenameEncoder = URLEncoder.encode(filename, "utf-8");				
		}//此时filename是没有被编码的文件名 filenameEncoder是编码后的文件名

		
		//要告诉下载的文件的类型----客服端通过文件MIME来判断
		response.setContentType(this.getServletContext().getMimeType(filename));
		
		//告诉客服端该文件不是直接解析(解析)，而是以附件形式打开（下载）
		response.setHeader("Content-Disposition", "attachment;filename="+filenameEncoder);//filename两个是不同的，第一个是固定的格式
		
		
		//2,获得文件名的绝对地址
		String path = this.getServletContext().getRealPath("download/"+filename);
		//3,获得该文件的输入流
		InputStream stream = new FileInputStream(path);
		//4,获得输出流
		ServletOutputStream out = response.getOutputStream();
		
		//5,文件拷贝的代码
		int len;
		byte[] buffer = new byte[1024];
		while((len=stream.read(buffer))>0)
		{
			
			out.write(buffer);
		}
		stream.close();
		out.close();
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
