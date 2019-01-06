package com.it;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class example06 {
	public static void main(String[] args) throws IOException {
		BufferedInputStream bis = new BufferedInputStream(new FileInputStream("des.text"));
		
		BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream("des.text"));
		int len;
		while((len =bis.read())!=-1) {
			bos.write(len);
		}
		bis.close();
		bos.close();
	}
}
