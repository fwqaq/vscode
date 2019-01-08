package jdbc;

import java.sql.SQLException;
import java.util.List;
import java.util.Map;
import java.util.Properties;

import org.apache.commons.beanutils.BeanUtils;
import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanListHandler;

import DAO.DAO;
import domain.user;
import getsource.c3p0utils;

public class JDBC {
		public static void main(String[] args) throws SQLException {
			//注册驱动并且创建连接
			DAO dao = new DAO();
			user use = new user();
			use.setId(3);
			use.setUsername("zhangsan");
			use.setPassword("123456");
			use.setEmail("zhangsan@qq.com");
			dao.selectALL();//查询所有的数据
			dao.updateData(use);//	修改参数
			user use1 = new user();
			use.setId(4);
			use.setUsername("zhangsan");
			use.setPassword("123456");
			use.setEmail("zhangsan@qq.com");
			dao.insertUser(use1);//插入数据
			dao.deleteData();//删除数据
			
			
		    
		}
}
