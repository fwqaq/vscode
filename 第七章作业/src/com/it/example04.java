package com.it;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import org.xml.sax.InputSource;

public class example04 {
	public static void main(String[] args) throws IOException {
		InputStream in = new FileInputStream("五环之歌");
		OutputStream out = new FileOutputStream("三字歌");
		int len;
		long begintime = System.currentTimeMillis();
		while((len=in.read())!=-1) {
			out.write(len);
		}
		long endtime = System.currentTimeMillis();
		System.out.println("消耗时间："+(begintime-endtime));
		in.close();
		out.close();
	}
}
