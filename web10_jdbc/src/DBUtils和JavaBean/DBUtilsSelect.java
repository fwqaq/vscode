package DBUtils和JavaBean;

import java.sql.SQLException;
import java.util.List;
import java.util.Map;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanListHandler;
import org.apache.commons.dbutils.handlers.MapListHandler;
import org.apache.commons.dbutils.handlers.ScalarHandler;
import org.junit.Test;

import domian.user;
import jdbc池.c3p0utils;

public class DBUtilsSelect {
	@Test
	public void testSelectAll() {
		//1,获取核心类
		QueryRunner qr =  new QueryRunner(c3p0utils.getDataSource());
		//2,编写sql语句
		String sql = "select * from cj";
		//3,执行查询操作
		try {
			List<user> users = qr.query(sql, new BeanListHandler<user>(user.class));
			for(user u:users)
			{
			System.out.println(u.getCid()+"----->"+u.getCname());	
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	
	}
	/**
	 * 查询用户的总个数
	 */
	@Test
	public void testSelectsum() {
		//1,获取核心类
		QueryRunner qr =  new QueryRunner(c3p0utils.getDataSource());
		//2,编写sql语句
		String sql = "select count(*) from cj";
		//3,执行查询操作
		try {
			Long sum = (Long) qr.query(sql, new ScalarHandler());
			//List<user> users = qr.query(sql, new BeanListHandler<user>(user.class));
			System.out.println(sum);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	
	}
	@Test
	/**
	 * 查询所有的数据
	 */
	
	public void testSelectsum1() {
		//1,获取核心类
		QueryRunner qr =  new QueryRunner(c3p0utils.getDataSource());
		//2,编写sql语句
		String sql = "select count(*) from cj";
		//3,执行查询操作
		try {
		 List<Map<String, Object>> users =  qr.query(sql, new MapListHandler());
		 for(Map<String, Object> mp:users)
		 {
			 System.out.println(mp.get(1));
		 }
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	
	}
	
}
