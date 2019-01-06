package com.it;

import java.io.File;

public class example11 {
	public static void main(String[] args) {
		File file = new File("FileTest.txt");
		if( file.exists() ){
			file.delete();
			System.out.println("成功！");
		}
		else System.out.println("文件不存在!");
	}
}
