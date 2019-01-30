package dao;

import java.sql.SQLException;
import java.util.List;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanListHandler;

import domain.Product;
import utils.c3p0utils;

public class Dao {

	public List<Product> findAllProduct() throws SQLException {
		List<Product> list;
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from product";
		list = qr.query(sql, new BeanListHandler<Product>(Product.class));
		return list;
		// TODO Auto-generated method stub
		
	}

}
