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
		//1,注册驱动
		Class.forName("com.mysql.jdbc.Driver");
		//2，获取连接
		Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/web08", "root", "root");
		//3，创建执行sql语句的对象
		Statement stmt = conn.createStatement();
		//4,书写一个MySQL语句
		String sql = "select * from xsxx";
		//5,执行一个sql语句
		ResultSet re = stmt.executeQuery(sql);
		//6，对查询的结果进行处理
		if(re.next())
		{
			System.out.println("数据库存在");
		}
		else {
			System.out.println("数据库不存在");
		}
		if(re!=null)
			re.close();
		if(stmt!=null)
			stmt.close();
		if(conn!=null)
			conn.close();
	}
	public void login1() throws ClassNotFoundException, SQLException {
		//1,注册驱动
		Class.forName("com.mysql.jdbc.Driver");
		//2，获取连接
		Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/web08", "root", "root");
		//3,创建sql语句
		String sql  = "select * from xsxx";
		//4，创建一个预处理对象
		PreparedStatement stmt = conn.prepareStatement(sql);
		//5，设置参数,
		//6执行查询结果
		ResultSet re = stmt.executeQuery();
		//7,对查询的结果进行处理
		if(re.next())
		{
			System.out.println("数据库存在");
		}
		else {
			System.out.println("数据库不存在");
		}
		if(re!=null)
			re.close();
		if(stmt!=null)
			stmt.close();
		if(conn!=null)
			conn.close();
		
		
		
	}
}
