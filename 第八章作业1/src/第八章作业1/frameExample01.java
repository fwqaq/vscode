package �ڰ�����ҵ1;

import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class frameExample01 {
	public static void main(String[] args) {
		int i = 1;
		Frame f = new Frame("��������ť�����µİ�ť");
		f.setLayout(new FlowLayout(FlowLayout.LEFT,20,30));
		f.setSize(200,300);
		f.setLocation(300, 200);
		Button button = new Button("��"+i+"����ť");
		f.add(button);
		f.setVisible(true);
		button.addMouseListener(new MouseListener() {
			public void mouseClicked(MouseEvent e) {//�����ʱ��
				// TODO Auto-generated method stub
				
				f.add(new Button("����һ���µİ�ť"));
				f.show();
			}

			@Override
			public void mousePressed(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void mouseReleased(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void mouseEntered(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void mouseExited(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}


		});
	}
}
