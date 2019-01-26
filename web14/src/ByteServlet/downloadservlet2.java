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
		//****�����ļ�����
		//1������ļ����ص��ļ���
		String filename = request.getParameter("filename");
		//�����ļ�������--
		filename = new String(filename.getBytes("ISO8859-1"),"UTF-8");//���ļ������б���
		
		//ͨ��requestȥ�õ��ͷ��˵������������
		String agent = request.getHeader("User-Agent");
		//ͨ����ͬ���������ñ���ķ�ʽ
		String filenameEncoder = "";
		if (agent.contains("MSIE")) {
				// IE�����
			filenameEncoder = URLEncoder.encode(filename, "utf-8");
			filenameEncoder = filenameEncoder.replace("+", " ");
		} else if (agent.contains("Firefox")) {
				// ��������
		BASE64Encoder base64Encoder = new BASE64Encoder();
		filenameEncoder = "=?utf-8?B?"
						+ base64Encoder.encode(filename.getBytes("utf-8")) + "?=";
		} else {
				// ���������
			filenameEncoder = URLEncoder.encode(filename, "utf-8");				
		}//��ʱfilename��û�б�������ļ��� filenameEncoder�Ǳ������ļ���

		
		//Ҫ�������ص��ļ�������----�ͷ���ͨ���ļ�MIME���ж�
		response.setContentType(this.getServletContext().getMimeType(filename));
		
		//���߿ͷ��˸��ļ�����ֱ�ӽ���(����)�������Ը�����ʽ�򿪣����أ�
		response.setHeader("Content-Disposition", "attachment;filename="+filenameEncoder);//filename�����ǲ�ͬ�ģ���һ���ǹ̶��ĸ�ʽ
		
		
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
