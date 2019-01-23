package test02;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import org.junit.Test;

public class test01 {
		
	@Test
	/**
	 * 
	 */
	public void testFindUserById() {
		PreparedStatement pstmt = null;
		
		ResultSet rs = null;
		//1����ȡ����
		Connection conn = JDBCUtils_v1.getConnection();
		//2����дsql���
		String sql = "select * from cj where cid=?";
		//��ȡִ��sql������
		try {
			//3,��ȡִ��sql������
			pstmt = conn.prepareStatement(sql);
			//4,���ò���
			pstmt.setString(1, "123");
			//5,ִ�в�ѯ����
			rs = pstmt.executeQuery();
			//6,����ִ�н��
			while(rs.next())
			{
				System.out.println(rs.getString(1)+"-----"+rs.getString("cname"));
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		finally {
			//7���ͷ���Դ
			JDBCUtils_v1.release(conn, pstmt, rs);
		}
		
	}
}
