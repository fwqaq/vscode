package test01;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

/**
 * 获取连接以及释放资源的方法
 * @author dell
 *
 */
public class JDBCUtils_v1 {
	/**
	 * 获取连接函数
	 * @return
	 */
	public static Connection getConnection() {
		Connection conn = null;//初始化连接类
		try {
			//注册驱动
			Class.forName("com.mysql.jdbc.Driver");
			//获取连接
		   conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/web08", "root", "root");
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
