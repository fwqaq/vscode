package Test01;

import java.sql.Connection;
import java.sql.PreparedStatement;


import org.junit.Test;

import mydatasource.mydatasource;

public class testJDBC {
	@SuppressWarnings("null")
	@Test
	public void testAddUser() 
	{	
		Connection conn = null;
		PreparedStatement pstmt = null;
		//1,�����Զ������ӳض���
		mydatasource mds = new mydatasource();
		
		try {
			
		//2���ӳ����л�ȡ����
			conn = mds.getConnection();
		//3����дsql���
			String sql ="insert into cj values(?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, "456");
			pstmt.setString(2, "as");
			int rows = pstmt.executeUpdate();
			if(rows>0)
			{
				System.out.println("��ӳɹ�");
			}
			else {
				System.out.println("���ʧ��");
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		finally {
			mds.backConnection(conn);
		}
	}
}
