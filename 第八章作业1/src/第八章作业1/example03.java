package �ڰ�����ҵ1;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.Frame;
import java.awt.GridLayout;

public class example03 {
	public static void main(String[] args) {
		Frame f = new Frame("����һ������Ľ���");
		f.setLayout(new GridLayout(4,3));
		f.setSize(300,400);
		f.setLocation(500, 600);
		for(int i = 0;i<12;i++) {
			Button button = new Button("���ǵ�"+(i+1)+"����ť");
			f.add(button);
		}
		f.show();
	}
}
