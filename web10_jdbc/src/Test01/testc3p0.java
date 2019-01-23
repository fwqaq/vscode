package Test01;

import java.sql.Connection;
import java.sql.PreparedStatement;


import jdbc池.JDBCUtils_v1;
import jdbc池.c3p0utils;

public class testc3p0 {
	public void test() {
		

		Connection conn = null;
		PreparedStatement pstmt = null;
		//1,创建自定义连接池对象
		
		try {
			
		//2，从池子中获取对象
			conn = c3p0utils.getConnection();
		//3，编写sql语句
			String sql ="insert into cj values(?,?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, "520");
			pstmt.setString(2, "ai");
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
			JDBCUtils_v1.release(conn, pstmt, null);
		}
	}
}
