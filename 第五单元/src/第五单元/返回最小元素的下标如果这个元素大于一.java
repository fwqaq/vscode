package ���嵥Ԫ;

import java.util.Scanner;

public class ������СԪ�ص��±�������Ԫ�ش���һ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     System.out.println("����һ������ĳ���");
     int length;
     Scanner in = new Scanner(System.in);
     length = in.nextInt();
     int []shuzu;
     shuzu = new int[length];
     for (int i = 0; i < shuzu.length; i++) {
		shuzu[i] = in.nextInt();
	}
     int min = shuzu[0];
     int a =0;
      for (int i = 0; i < shuzu.length; i++) {
		if (shuzu[i] < min) {
			min = shuzu[i];
			a = i;
		}
	}
      if(min>1) {
     System.out.println("��СԪ�ص�С���ǣ�"+a);
	}
	else {
		System.out.println("��������С��Ԫ����С��һ���ߵ���һ��");
	}

}
}
