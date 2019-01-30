package service;

import java.sql.SQLException;
import java.util.List;

import dao.Dao;
import domain.Product;

public class ProductService {



	public List<Product> findAllProduct() throws Exception {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		List<Product> list = dao.findAllProduct();
		return list;
	}



}
