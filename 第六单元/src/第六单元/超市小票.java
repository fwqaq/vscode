package ������Ԫ;

import java.util.Scanner;

/*
 * 
 * 
 *  �����й���СƱ�����У�����¼�벿�ַ�װΪ������
 *  ��switch�����ɵ�������֧�����߼���װΪ3������
 *	���û�����1ʱ�����û�������Ҫ�������Ʒ����
 *	���û�����2ʱ�����û���ӡ����Ӧ�Ĺ���СƱ
 *  ���û�����3ʱ���˳�ϵͳ
 * 
 * 
 * 
 * */
public class ����СƱ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub	
	Scanner in = new Scanner (System.in);
      int dowhat;
      int []number;
      String []name;
      number = new int[10];
      name = new String[10];
      int i;
      dowhat  = in.nextInt();
      switch (dowhat)
      {
      case 1 :getshuliang(number,name);
      case 2 :DY(number, name);break;
      case 3 :
      }
	}
    public static void getshuliang(int []number,String []name)
    {   int put=1;
        int i=0;
    while(put==1)
    	{
    	Scanner in = new Scanner(System.in);
    	System.out.println("������Ʒ����");
    	name[i] = in.next();
        System.out.println("������Ʒ����");
    	int a = in.nextInt();
    	number[i] = a;
    	i++;
    	System.out.println("�Ƿ����������Ʒ��������1����0�˳�");
    	put = in.nextInt();
    } 
    }
    public static void DY(int []number,String []name)
    {
    	System.out.println("****\t**��ӭ����***\t***");
    	
    	for (int j = 0; j < name.length; j++) {
			if(number[j]!=0)
				System.out.println(name[j]+number[j]);
		}
    }
}
