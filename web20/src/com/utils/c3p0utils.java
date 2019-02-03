package com.utils;

import java.sql.Connection;
import java.sql.SQLException;
import javax.sql.DataSource;
import com.mchange.v2.c3p0.ComboPooledDataSource;

public class c3p0utils {
	private static ComboPooledDataSource dataSource = new ComboPooledDataSource();
	
	 public static DataSource getDataSource() {
		 return dataSource;
	 }
	 
	 public static Connection getConnection() {
		 
		 try {
			return dataSource.getConnection();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			throw new RuntimeException(e);
		}
	 }
}
