package DAO;

import java.sql.SQLException;
import java.util.List;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanListHandler;

import domain.user;
import getsource.c3p0utils;

public class DAO {

	public static void selectALL() throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from user";//查询库中所有的数据
		List< user> list = qr.query(sql, new BeanListHandler<user>(user.class));
		for(user list1:list) {
			System.out.println("id="+list1.getId());
			System.out.println("username="+list1.getUsername());
			System.out.println("password="+list1.getPassword());
			System.out.println("email="+list1.getEmail());
	}
}
		public static void updateData(user use) throws SQLException {
			// TODO Auto-generated method stub
			QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
			String sql = "update user set id=?,username=?,password=?,email=? where id=?";
			qr.update(sql, use.getId(),use.getUsername(),use.getPassword(),use.getEmail(),1);
			
		}
		public void insertUser(user use1) throws SQLException {
			// TODO Auto-generated method stub
			QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
			String sql = "insert into user values(?,?,?,?)";
			qr.update(sql, use1.getId(),use1.getUsername(),use1.getPassword(),use1.getEmail());
		}
		public void deleteData() throws SQLException {
			// TODO Auto-generated method stub
			QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
			String sql = "delete from user where id=?";
			qr.update(sql, ""); 
			
		}

}

