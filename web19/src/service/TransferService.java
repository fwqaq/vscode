package service;

import java.sql.Connection;
import java.sql.SQLException;

import dao.Dao;
import utils.c3p0utils;

public class TransferService {

	public boolean transfer(Connection conn,String out, String in, double money) throws SQLException {
		// TODO Auto-generated method stub
		boolean transferAcc = true;
		Dao dao = new Dao();
		//�����˻����ӵĲ���
		try {
			conn = c3p0utils.getConnection();
			conn.setAutoCommit(false);
			dao.add(in,money);
			dao.reduce(out,money);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			transferAcc=false;
			conn.rollback();
			e.printStackTrace();
		}
		finally{
			conn.commit();
		}
		//�����˻��ļ��ٲ���
		return transferAcc;
	}

}
