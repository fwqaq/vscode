package Test01;

import java.sql.Connection;
import java.sql.PreparedStatement;


import jdbc��.JDBCUtils_v1;
import jdbc��.c3p0utils;

public class testc3p0 {
	public void test() {
		

		Connection conn = null;
		PreparedStatement pstmt = null;
		//1,�����Զ������ӳض���
		
		try {
			
		//2���ӳ����л�ȡ����
			conn = c3p0utils.getConnection();
		//3����дsql���
			String sql ="insert into cj values(?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, "520");
			pstmt.setString(2, "ai");
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
			JDBCUtils_v1.release(conn, pstmt, null);
		}
	}
}
