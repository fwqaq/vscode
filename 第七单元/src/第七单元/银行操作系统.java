package ���ߵ�Ԫ;

import java.util.Scanner;

public class ���в���ϵͳ {
public static void main(String[] args) {
	yinhang A = new yinhang();
	A.yinhang(10001,"����", "�����з����������",100000, 100);
	System.out.println("��ӭ�������������������");
	System.out.println("........�������.......");
	System.out.println("0........���..........");
	System.out.println("1........ȡ��..........");
	System.out.println("2......��ѯ��Ϣ........");
	System.out.println("3......�˳�����........");
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
