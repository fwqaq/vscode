package dbcp���ӳ�;

import java.io.InputStream;
import java.util.Properties;

import javax.sql.DataSource;

import org.apache.commons.dbcp.BasicDataSourceFactory;

public class DBCPUtils {
	private static DataSource dataSource;
	static {
		try {
		//1�������ҵ�properties�ļ�
		InputStream is = DBCPUtils.class.getClassLoader().getResourceAsStream("db.properties");
		//2,����������
		Properties props = new Properties();
			props.load(is);
		//3,��������Դ
		dataSource = BasicDataSourceFactory.createDataSource(props);
		
		} catch (Throwable e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	public DataSource getDS() {
		return dataSource;
		
	}
}
