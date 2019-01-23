package mydatasource;

import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.SQLFeatureNotSupportedException;
import java.util.LinkedList;
import java.util.logging.Logger;

import javax.sql.DataSource;

import jdbc��.JDBCUtils_v1;

public class mydatasource implements DataSource{
	//1,����һ�������洢Connection����
	private static LinkedList<Connection> pool = new LinkedList<Connection>();
	//2,�������Ӽ��뵽���У���������������
	static {//�����Ǿ�̬����������static��ʹ��
		for (int i = 0; i < 5; i++) {
			pool.add(JDBCUtils_v1.getConnection());
		}
	}
	@Override
	//��д��ȡ���ӵĲ���
	public Connection getConnection() throws SQLException {
		//3,ʹ��ǰ���ж��ǲ��ǿ�
		if(pool.size()==0) {
		//4������ǿմ���һЩ����
			for (int i = 0; i < 5; i++) {
				pool.add(JDBCUtils_v1.getConnection());
			}
		}
		//5,����������ȡһ�����Ӷ���
		Connection conn = pool.remove(0);
		return conn;
	}
	/*
	 * 6.�黹���Ӷ���
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
