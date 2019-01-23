package test02;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ResourceBundle;

/**
 * 获取连接以及释放资源的方法
 * @author dell
 *
 */
public class JDBCUtils_v1 {
	private static String Driver;
	private static String url;
	private static String username;
	private static String password;
	/**
	 * 使用ResourceBundle加载properties
	 */
	static {
		ResourceBundle bundle = ResourceBundle.getBundle("db");
		Driver = bundle.getString("jdbc.driver");
		url = bundle.getString("jdbc.url");
		username = bundle.getString("jdbc.username");
		password = bundle.getString("jdbc.password");
	}
	/**
	 * 获取连接函数
	 * @return
	 */
	public static Connection getConnection() {
		Connection conn = null;//初始化连接类
		try {
			//注册驱动
			Class.forName(Driver);
			//获取连接
		   conn = DriverManager.getConnection(url, username, password);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return conn;
	}
	/**
	 * 释放函数
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
