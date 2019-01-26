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
 * Servlet implementation class Byte
 */
public class Byte extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//ʹ��response����ֽ������
		ServletOutputStream stream = response.getOutputStream();
		String realpath = this.getServletContext().getRealPath("a.jpg");//��ʵ·��
		InputStream in = new FileInputStream(realpath);//�ļ���ȡ��
		//�ֽ������
		int len;
		byte[] buffer = new byte[1024];
		while((len=in.read(buffer))>0)
		{
			stream.write(buffer);
		}
		stream.close();
		in.close();
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
