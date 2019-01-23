package test02;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class test02 {
    
	public void addIn()
	{
        Statement pstmt = null;
		
		ResultSet rs = null;
		//1，获取连接
		Connection conn = JDBCUtils_v1.getConnection();	
		//2，编写sql语句
		String sql = "insert into cj values ('?','?')";
		//3，执行sql语句
		try {
			pstmt = conn.createStatement();
			int r = pstmt.executeUpdate("insert into cj values ('234','abc')");
			System.out.println(r);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		finally {
			JDBCUtils_v1.release(conn,null, rs);
		}
	}
	}
