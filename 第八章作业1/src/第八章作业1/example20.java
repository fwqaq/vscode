package 第八章作业1;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JFrame;
import javax.swing.JMenuItem;
import javax.swing.JPopupMenu;

public class example20 extends JFrame{
		private JPopupMenu popupMenu;
		public example20() {
			//创建三个菜单
			popupMenu = new JPopupMenu();
			JMenuItem refreshItem = new JMenuItem("refresh");
			JMenuItem createItem = new JMenuItem("create");
			JMenuItem exitItem = new JMenuItem("exit");
			exitItem.addActionListener(new ActionListener() {
				
				@Override
				public void actionPerformed(ActionEvent e) {
					// TODO Auto-generated method stub
					System.exit(0);
				}
			});//添加时间监听器
			popupMenu.add(refreshItem);
			popupMenu.add(createItem);
			popupMenu.addSeparator();
			popupMenu.add(exitItem);
			this.addMouseListener(new MouseListener() {
				@Override
				public void mouseClicked(MouseEvent e) {
					// TODO Auto-generated method stub
					if(e.getButton() == e.BUTTON3) {
						popupMenu.show(e.getComponent(), e.getX(), e.getY());
					}
				}
				
				@Override
				public void mouseReleased(MouseEvent e) {
					// TODO Auto-generated method stub
					
				}
				
				@Override
				public void mousePressed(MouseEvent e) {
					// TODO Auto-generated method stub
					
				}
				
				@Override
				public void mouseExited(MouseEvent e) {
					// TODO Auto-generated method stub
					
				}
				
				@Override
				public void mouseEntered(MouseEvent e) {
					// TODO Auto-generated method stub
					
				}
				
			
			});
			this.setSize(300,300);
			this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			this.setVisible(true);
			
		}
		public static void main(String[] args) {
			example20 ex = new example20();
		}
}
