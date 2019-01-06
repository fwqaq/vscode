package com.it;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class example0 {
		public static void main(String[] args) throws IOException {
			FileInputStream stream = new FileInputStream("fis.text");
			int b = 0;
			while(true) {
				b = stream.read();
				if(b == -1) {
					break;
				}
				System.out.println(b);
			}
			stream.close();
			
		}
}
