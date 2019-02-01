package dao;

import java.sql.Connection;
import java.sql.SQLException;

import org.apache.commons.dbutils.QueryRunner;

import com.mchange.v2.c3p0.cfg.C3P0Config;

import utils.c3p0utils;

public class Dao {
		//增加账户的操作
		public void add(String in, double money) throws SQLException {
			// TODO Auto-generated method stub
			QueryRunner qr = new QueryRunner();
			Connection conn =c3p0utils.getConnection();
			String sql = "update account set money=money+? where name=?";
			qr.update(conn, sql, money,in);
		}

		public void reduce(String out, double money) throws SQLException {
			// TODO Auto-generated method stub
			QueryRunner qr = new QueryRunner();
			Connection conn =c3p0utils.getConnection();
			String sql = "update account set money=money-? where name=?";
			qr.update(conn, sql, money,out);
		
		}

}
