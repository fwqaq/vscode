package �ڰ���;

import java.util.Scanner;

public class ��¼ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   zhanghaolei []name ;
   name = new zhanghaolei[10];
   String number;
   String mima;
   Scanner in = new Scanner(System.in);
   System.out.print("�������˺ţ�");
   number = in.nextLine();
   System.out.print("���������룺");
   mima = in.nextLine();
   for (int i = 0; i < name.length; i++) {
	zhanghaolei a = new zhanghaolei();
	a.mima = mima;
	a.number = number;
	name[i] = a;
	System.out.print("�������˺ţ�");
	number = in.nextLine();
	System.out.print("���������룺");
	mima = in.nextLine();
	
}
   System.out.println("��¼..............1");
	System.out.println("ע��..............2");
	int i;
	i = in.nextInt();
	switch(i)
	{
	case 1:
		if(deng(name));
		{
			System.out.println("��¼�ɹ�");
		}break;
	case 2:break;
		
	}
	}
	public static boolean deng(zhanghaolei []name)
	{Scanner in = new Scanner(System.in);
	String number;
	String mima;
	System.out.print("�������˺ţ�");
	number = in.nextLine();
	System.out.print("���������룺");
	mima = in.nextLine();
	int a = 1;
	System.out.println();
	for (int i = 0; i < name.length; i++) {
		if(number.equals(name[i].number)&&mima.equals(name[i].mima))
		{
			a = 0;
			break;
		}
		}
	if(a == 0)
		return true;
	else 
		return false;
	}
	/*ʵ�ַ�ʽ���ƣ����ע�᰸����*/
   public static  void  zhuce(zhanghaolei []name)
   {   int a =1;
	   System.out.println("������ע�����");
	   Scanner in = new Scanner(System.in);
	   String number = in.nextLine();
	   System.out.println("������ע������");
	   String mima = in.nextLine();
	   for (int i = 0; i < name.length; i++){
		if(number.equals(name[i].number))
		{
			a = 0;
			break;
		}
	}
	   if(a==1)
	   {
		   System.out.println("ע��ɹ�");
	   }
	   else {
		   System.out.println("ע��ʧ��");
	   }
	   
	   
   }
}
