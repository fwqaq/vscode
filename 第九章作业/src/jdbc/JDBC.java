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
			//ע���������Ҵ�������
			DAO dao = new DAO();
			user use = new user();
			use.setId(3);
			use.setUsername("zhangsan");
			use.setPassword("123456");
			use.setEmail("zhangsan@qq.com");
			dao.selectALL();//��ѯ���е�����
			dao.updateData(use);//	�޸Ĳ���
			user use1 = new user();
			use.setId(4);
			use.setUsername("zhangsan");
			use.setPassword("123456");
			use.setEmail("zhangsan@qq.com");
			dao.insertUser(use1);//��������
			dao.deleteData();//ɾ������
			
			
		    
		}
}
