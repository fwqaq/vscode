package test01;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import org.junit.Test;


public class testLogin {
	@Test
	public void test01() throws ClassNotFoundException, SQLException {
		login("zs","zs");
		login1();
	}
	public void login(String username,String password) throws ClassNotFoundException, SQLException {
		//1,ע������
		Class.forName("com.mysql.jdbc.Driver");
		//2����ȡ����
		Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/web08", "root", "root");
		//3������ִ��sql���Ķ���
		Statement stmt = conn.createStatement();
		//4,��дһ��MySQL���
		String sql = "select * from xsxx";
		//5,ִ��һ��sql���
		ResultSet re = stmt.executeQuery(sql);
		//6���Բ�ѯ�Ľ�����д���
		if(re.next())
		{
			System.out.println("���ݿ����");
		}
		else {
			System.out.println("���ݿⲻ����");
		}
		if(re!=null)
			re.close();
		if(stmt!=null)
			stmt.close();
		if(conn!=null)
			conn.close();
	}
	public void login1() throws ClassNotFoundException, SQLException {
		//1,ע������
		Class.forName("com.mysql.jdbc.Driver");
		//2����ȡ����
		Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/web08", "root", "root");
		//3,����sql���
		String sql  = "select * from xsxx";
		//4������һ��Ԥ�������
		PreparedStatement stmt = conn.prepareStatement(sql);
		//5�����ò���,
		//6ִ�в�ѯ���
		ResultSet re = stmt.executeQuery();
		//7,�Բ�ѯ�Ľ�����д���
		if(re.next())
		{
			System.out.println("���ݿ����");
		}
		else {
			System.out.println("���ݿⲻ����");
		}
		if(re!=null)
			re.close();
		if(stmt!=null)
			stmt.close();
		if(conn!=null)
			conn.close();
		
		
		
	}
}
