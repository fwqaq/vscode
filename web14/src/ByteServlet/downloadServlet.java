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
		//1������ļ����ص��ļ���
		String filename = request.getParameter("filename");
		
		//Ҫ�������ص��ļ�������----�ͷ���ͨ���ļ�MIME���ж�
		response.setContentType(this.getServletContext().getMimeType(filename));
		
		//���߿ͷ��˸��ļ�����ֱ�ӽ���(����)�������Ը�����ʽ�򿪣����أ�
		response.setHeader("Content-Disposition", "attachment;filename="+filename);//filename�����ǲ�ͬ�ģ���һ���ǹ̶��ĸ�ʽ
		
		
		//2,����ļ����ľ��Ե�ַ
		String path = this.getServletContext().getRealPath("download/"+filename);
		//3,��ø��ļ���������
		InputStream stream = new FileInputStream(path);
		//4,��������
		ServletOutputStream out = response.getOutputStream();
		
		//5,�ļ������Ĵ���
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
