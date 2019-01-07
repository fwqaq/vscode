package 第八章作业1;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.Frame;
import java.awt.GridLayout;

public class example03 {
	public static void main(String[] args) {
		Frame f = new Frame("这是一个网格的界面");
		f.setLayout(new GridLayout(4,3));
		f.setSize(300,400);
		f.setLocation(500, 600);
		for(int i = 0;i<12;i++) {
			Button button = new Button("这是第"+(i+1)+"个按钮");
			f.add(button);
		}
		f.show();
	}
}
