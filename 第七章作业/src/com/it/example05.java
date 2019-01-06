package com.it;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

import org.xml.sax.InputSource;

public class example05 {
	public static void main(String[] args) throws Exception {
		InputStream bis = new BufferedInputStream(new FileInputStream("source\\Breath and Life.mp3"));
		OutputStream bos = new BufferedOutputStream(new FileOutputStream("target\\Breath and Life.mp3"));
		int len=0;
		long beginTime = System.currentTimeMillis();
		while( (len=bis.read())!=-1 ) {
			bos.write(len);
		}
		long endTime = System.currentTimeMillis();
		System.out.println("ºÄÊ±£º " + (endTime-beginTime) + "ms");
		bis.close();
		bos.close();
	}
		
		
}
