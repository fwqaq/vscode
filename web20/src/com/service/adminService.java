package com.service;

import java.sql.SQLException;
import java.util.List;

import com.dao.Dao;
import com.domain.Category;
import com.domain.Condition;
import com.domain.Product;

public class adminService {

	public List<Product> findAllProduct() throws SQLException {
		// TODO Auto-generated method stub
		Dao dao =  new Dao();
		List<Product> list = dao.findAllProduct();
		return list;
	}

	public List<Category> findAllCategory() throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		List<Category> category = dao.findCategory();
		return category;
	}

	public void addProduct(Product product) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		dao.addProduct(product);
	}

	public void delProduct(String pid) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		dao.delProduct(pid);
	}

	public Product updateShowProduct(String pid) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		Product product = dao.updateShowProduct(pid);
		return product;
		
	}

	public void updateProduct(Product product) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		dao.updateProduct(product);
	}

	public List<Product> SearchProduct(Condition condition) throws SQLException {
		// TODO Auto-generated method stub
		//调用Dao中的方法进行查询
		Dao dao = new Dao();
		List<Product> list = dao.searchProduct(condition);
		return list;
	}
	//查看所有的Category的操作
	public List<Category> ShowAllCategory() throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		List<Category> list = dao.ShowAllCategory();
		return list;
	}
	//删除菜单的操作
	public void delCategory(String cid) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		dao.delCategory(cid);
	}

	public Category UpdateCategory(String cid) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		Category category = dao.updateCategory(cid);
		return category;
		
	}

	public void updateCategoryById(String cid, String cname) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		dao.updateCategoryById(cid,cname);
		
	}

	public void addCategory(String cid, String cname) throws SQLException {
		// TODO Auto-generated method stub
		Dao dao = new Dao();
		dao.addCategory(cid, cname);
	}


}
