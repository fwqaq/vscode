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
		//1，获取连接
		Connection conn = JDBCUtils_v1.getConnection();
		//2，编写sql语句
		String sql = "select * from cj where cid=?";
		//获取执行sql语句对象
		try {
			//3,获取执行sql语句对象
			pstmt = conn.prepareStatement(sql);
			//4,设置参数
			pstmt.setString(1, "123");
			//5,执行查询操作
			rs = pstmt.executeQuery();
			//6,处理执行结果
			while(rs.next())
			{
				System.out.println(rs.getString(1)+"-----"+rs.getString("cname"));
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		finally {
			//7，释放资源
			JDBCUtils_v1.release(conn, pstmt, rs);
		}
		
	}
}
