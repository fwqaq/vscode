package test01;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

/**
 * ��ȡ�����Լ��ͷ���Դ�ķ���
 * @author dell
 *
 */
public class JDBCUtils_v1 {
	/**
	 * ��ȡ���Ӻ���
	 * @return
	 */
	public static Connection getConnection() {
		Connection conn = null;//��ʼ��������
		try {
			//ע������
			Class.forName("com.mysql.jdbc.Driver");
			//��ȡ����
		   conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/web08", "root", "root");
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return conn;
	}
	/**
	 * �ͷź���
	 */
	public static void release(Connection conn,PreparedStatement ptmt,ResultSet rs) {
		if(rs!=null) {
			try {
				rs.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		if(ptmt!=null) {
			try {
				ptmt.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		if(conn!=null)
		{
			try {
				conn.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
	}
}
