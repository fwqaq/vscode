package dbcp连接池;

import java.io.InputStream;
import java.util.Properties;

import javax.sql.DataSource;

import org.apache.commons.dbcp.BasicDataSourceFactory;

public class DBCPUtils {
	private static DataSource dataSource;
	static {
		try {
		//1，加载找到properties文件
		InputStream is = DBCPUtils.class.getClassLoader().getResourceAsStream("db.properties");
		//2,加载输入流
		Properties props = new Properties();
			props.load(is);
		//3,创建数据源
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
