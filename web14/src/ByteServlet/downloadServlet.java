package ByteServlet;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class downloadServlet
 */
public class downloadServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//1，获得文件下载的文件名
		String filename = request.getParameter("filename");
		
		//要告诉下载的文件的类型----客服端通过文件MIME来判断
		response.setContentType(this.getServletContext().getMimeType(filename));
		
		//告诉客服端该文件不是直接解析(解析)，而是以附件形式打开（下载）
		response.setHeader("Content-Disposition", "attachment;filename="+filename);//filename两个是不同的，第一个是固定的格式
		
		
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
