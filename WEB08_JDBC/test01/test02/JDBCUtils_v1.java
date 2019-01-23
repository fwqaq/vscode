package test02;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ResourceBundle;

/**
 * ��ȡ�����Լ��ͷ���Դ�ķ���
 * @author dell
 *
 */
public class JDBCUtils_v1 {
	private static String Driver;
	private static String url;
	private static String username;
	private static String password;
	/**
	 * ʹ��ResourceBundle����properties
	 */
	static {
		ResourceBundle bundle = ResourceBundle.getBundle("db");
		Driver = bundle.getString("jdbc.driver");
		url = bundle.getString("jdbc.url");
		username = bundle.getString("jdbc.username");
		password = bundle.getString("jdbc.password");
	}
	/**
	 * ��ȡ���Ӻ���
	 * @return
	 */
	public static Connection getConnection() {
		Connection conn = null;//��ʼ��������
		try {
			//ע������
			Class.forName(Driver);
			//��ȡ����
		   conn = DriverManager.getConnection(url, username, password);
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
