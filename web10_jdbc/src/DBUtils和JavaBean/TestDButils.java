package DBUtils��JavaBean;

import java.sql.SQLException;

import org.apache.commons.dbutils.QueryRunner;
import org.junit.Test;

import com.mysql.jdbc.Connection;

import jdbc��.c3p0utils;

public class TestDButils {
	
	@Test
	public void testaddUser() {
		try {	
		//1,����������QueryRunner
		QueryRunner qr = new QueryRunner(c3p0utils.getDataSource());

		//2,��дsql���
		String sql = "insert into cj values(?,?)";
		//3,Ϊռλ������ֵ
		Object[] params = {"78","qw"};
		//4�����ò���
		
		int rows = qr.update(sql,params);
		if(rows>0)
		{
			System.out.println("��ӳɹ�"); 
		}
		else {
			System.out.println("���ʧ��");
				
		}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
