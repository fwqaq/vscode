package ���嵥Ԫ;

import java.util.Scanner;

public class �����ӡѧ�������� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    String []name;
    int []score;
    System.out.println("���ѧ��������");
    int number;
    Scanner in = new Scanner(System.in);
    number = in.nextInt();
    name = new String[number];
    score = new int[number];
    int exchangescore;
    String exchangename;
    System.out.println("����"+number+"��ѧ���������� �ɼ�");
    for (int i = 0; i < score.length; i++) {
		name[i] = in.next();
		score[i] = in.nextInt();
	}
    for (int i = 0; i < score.length; i++) 
    {
		for (int j = 0; j < score.length-i-1; j++)
		{
			    if(score[j] < score[j+1])
			    {
			    	exchangename = name[j];
			    	name[j] = name[j+1];
			    	name[j+1] = exchangename;
			    	exchangescore = score[j];
			    	score[j] = score[j+1];
			    	score[j+1] = exchangescore;
			     }	
		   }
	  }
    System.out.println("����������ּ��ɼ���");
    for (int i = 0; i < score.length; i++) {
		System.out.println(name[i]+"\t  "+score[i]);
		
	}
	}

}
