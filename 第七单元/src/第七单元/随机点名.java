package ���ߵ�Ԫ;

import java.util.Random;
import java.util.Scanner;

public class ������� {
public static void main(String[] args) {

       Person []Students ;
     Students = new Person[10];
    Scanner in = new Scanner (System.in);
	for (int i = 0; i < Students.length; i++) {
		Person a = new Person();
		System.out.println("�������"+(i+1)+"��ѧ��������");
		String name1;
		name1 = in.next();
		a.Person(name1);
		Students[i] = a;
	}
	Random r = new Random();
	int index = r.nextInt(10)+1;
	System.out.println(Students[index].put());
	
}

	
}
