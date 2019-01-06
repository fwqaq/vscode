package 第七单元;

import java.util.Scanner;

public class 银行操作系统 {
public static void main(String[] args) {
	yinhang A = new yinhang();
	A.yinhang(10001,"冯威", "重庆市奉节县永安镇",100000, 100);
	System.out.println("欢迎来到建设银行重庆分行");
	System.out.println("........输入操作.......");
	System.out.println("0........存款..........");
	System.out.println("1........取款..........");
	System.out.println("2......查询信息........");
	System.out.println("3......退出操作........");
	int i;
	Scanner in = new Scanner(System.in);
	i = in.nextInt();
    while(i!=3)
    {
    	switch(i) {
    	case 0:A.putmoney();break;
    	case 1:A.getmoney();break;
    	case 2:A.getinfo();break;
    	}
    	i = in.nextInt();
    }
}
}
