package com.it;

import java.io.FileWriter;

public class Example07 {
	public static void main(String[] args) throws Exception {
		FileWriter fw = new FileWriter("fw.txt");
		String str = "这是一个字符写入文件";
		fw.write(str);
		fw.write("\r\n");
		fw.close();
	}
}
