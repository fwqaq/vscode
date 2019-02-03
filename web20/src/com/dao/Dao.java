package com.dao;

import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;

import com.domain.Category;
import com.domain.Condition;
import com.domain.Product;
import com.sun.org.apache.bcel.internal.generic.NEW;
import com.utils.c3p0utils;

public class Dao {


	public List<Category> findCategory() throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from category";
		List<Category> category = qr.query(sql, new BeanListHandler<Category>(Category.class));
		return category;
	}

	public void addProduct(Product product) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "insert into product values(?,?,?,?,?,?,?,?,?,?)";
		qr.update(sql, product.getPid(),product.getPname(),product.getMarket_price(),product.getShop_price(),
				product.getPimage(),product.getPdate(),product.getIs_hot(),product.getPdesc(),product.getPflag(),product.getCid()
				);
		
	}

	public void delProduct(String pid) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "delete from product where pid=?";
		qr.update(sql,pid);
	}

	public Product updateShowProduct(String pid) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from product where pid=?";
		Product product = qr.query(sql, new BeanHandler<Product>(Product.class), pid);
		return product;
	}

	public void updateProduct(Product product) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "update product set pname=?,market_price=?,shop_price=?,pimage=?,pdate=?,is_hot=?,pdesc=?,pflag=?,cid=? where pid=?";
		qr.update(sql,product.getPname(),product.getMarket_price(),product.getShop_price(),
				product.getPimage(),product.getPdate(),product.getIs_hot(),product.getPdesc(),product.getPflag(),product.getCid(),
				product.getPid()
				);
	}

	public List<Product> searchProduct(Condition condition) throws SQLException {
		// TODO Auto-generated method stub
		//定义一个容器来接受传递的参数，因为参数个数是
		List<String> list1 = new ArrayList<String>();
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from product where 1=1 ";
		if(condition.getPanme()!=null&&!condition.getPanme().trim().equals(""))
		{
			sql+="and pname like ? ";
			list1.add(condition.getPanme());
		}
		if(condition.getIs_hot()!=null&&!condition.getIs_hot().trim().equals(""))
		{
			sql+="and is_hot=? ";
			list1.add(condition.getIs_hot());
		}
		if(condition.getCid()!=null&&!condition.getCid().trim().equals(""))
		{
			sql+="and cid=? ";
			list1.add(condition.getCid());
			
		}
		List<Product> list= qr.query(sql, new BeanListHandler<Product>(Product.class), list1.toArray());
		return list;
	}
	//和数据库连上查询所有的商品信息
	public List<Product> findAllProduct() throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from product";
		List<Product> list = qr.query(sql, new BeanListHandler<Product>(Product.class));
		return list;
	}

	public List<Category> ShowAllCategory() throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from category";
		List<Category> list = qr.query(sql, new BeanListHandler<Category>(Category.class));
		return list;
		
	}

	public void delCategory(String cid) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "delete from category where cid=?";
		qr.update(sql, cid);
		
	}

	public Category updateCategory(String cid) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "select * from category where cid=?";
		Category category = qr.query(sql, new BeanHandler<Category>(Category.class),cid);
		return category;
	}

	public void updateCategoryById(String cid, String cname) throws SQLException {
		// TODO Auto-generated method stub
		//对数据库进行操作，
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = "update category set cname=? where cid=?";
		qr.update(sql, cname,cid);
	}

	public void addCategory(String cid,String cname) throws SQLException {
		// TODO Auto-generated method stub
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());
		String sql = " insert into category values(?,?)";
		qr.update(sql,cid,cname);
	}

}
