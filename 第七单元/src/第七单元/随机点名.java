package 第七单元;

import java.util.Random;
import java.util.Scanner;

public class 随机点名 {
public static void main(String[] args) {

       Person []Students ;
     Students = new Person[10];
    Scanner in = new Scanner (System.in);
	for (int i = 0; i < Students.length; i++) {
		Person a = new Person();
		System.out.println("请输入第"+(i+1)+"个学生的名字");
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
