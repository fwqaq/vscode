package com.it;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class example02 {
	public static void main(String[] args) throws IOException {
		FileOutputStream out = new FileOutputStream("example.text");
		String str = "zzz";
		byte[] b = str.getBytes();
		for(int i = 0;i<b.length;i++) {
			out.write(b);
		}
		out.close();
	}
}
