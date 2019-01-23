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
		//1,创建自定义连接池对象
		mydatasource mds = new mydatasource();
		
		try {
			
		//2，从池子中获取对象
			conn = mds.getConnection();
		//3，编写sql语句
			String sql ="insert into cj values(?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, "456");
			pstmt.setString(2, "as");
			int rows = pstmt.executeUpdate();
			if(rows>0)
			{
				System.out.println("添加成功");
			}
			else {
				System.out.println("添加失败");
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		finally {
			mds.backConnection(conn);
		}
	}
}
