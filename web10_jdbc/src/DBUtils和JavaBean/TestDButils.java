package DBUtils和JavaBean;

import java.sql.SQLException;

import org.apache.commons.dbutils.QueryRunner;
import org.junit.Test;

import com.mysql.jdbc.Connection;

import jdbc池.c3p0utils;

public class TestDButils {
	
	@Test
	public void testaddUser() {
		try {	
		//1,创建核心类QueryRunner
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());

		//2,编写sql语句
		String sql = "insert into cj values(?,?)";
		//3,为占位符设置值
		Object[] params = {"78","qw"};
		//4，设置参数
		
		int rows = qr.update(sql,params);
		if(rows>0)
		{
			System.out.println("添加成功"); 
		}
		else {
			System.out.println("添加失败");
				
		}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
