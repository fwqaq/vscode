package mydatasource;

import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.SQLFeatureNotSupportedException;
import java.util.LinkedList;
import java.util.logging.Logger;

import javax.sql.DataSource;

import jdbc池.JDBCUtils_v1;

public class mydatasource implements DataSource{
	//1,创建一个容器存储Connection对象
	private static LinkedList<Connection> pool = new LinkedList<Connection>();
	//2,创建连接加入到池中，例如加入五个连接
	static {//必须是静态变量才能在static中使用
		for (int i = 0; i < 5; i++) {
			pool.add(JDBCUtils_v1.getConnection());
		}
	}
	@Override
	//重写获取连接的操作
	public Connection getConnection() throws SQLException {
		//3,使用前先判断是不是空
		if(pool.size()==0) {
		//4，如果是空创建一些加入
			for (int i = 0; i < 5; i++) {
				pool.add(JDBCUtils_v1.getConnection());
			}
		}
		//5,冲池子里面获取一个连接对象
		Connection conn = pool.remove(0);
		return conn;
	}
	/*
	 * 6.归还连接对象
	 * (non-Javadoc)
	 * @see javax.sql.CommonDataSource#getParentLogger()
	 */
	public void backConnection(Connection conn) {
		pool.add(conn);
	}
	@Override
	public Logger getParentLogger() throws SQLFeatureNotSupportedException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean isWrapperFor(Class<?> arg0) throws SQLException {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public <T> T unwrap(Class<T> arg0) throws SQLException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Connection getConnection(String arg0, String arg1) throws SQLException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public PrintWriter getLogWriter() throws SQLException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public int getLoginTimeout() throws SQLException {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public void setLogWriter(PrintWriter arg0) throws SQLException {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void setLoginTimeout(int arg0) throws SQLException {
		// TODO Auto-generated method stub
		
	}

}
