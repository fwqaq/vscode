package µÚ°ËÕÂ;

import java.util.Scanner;

public class µÇÂ¼ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   zhanghaolei []name ;
   name = new zhanghaolei[10];
   String number;
   String mima;
   Scanner in = new Scanner(System.in);
   System.out.print("ÇëÊäÈëÕËºÅ£º");
   number = in.nextLine();
   System.out.print("ÇëÊäÈëÃÜÂë£º");
   mima = in.nextLine();
   for (int i = 0; i < name.length; i++) {
	zhanghaolei a = new zhanghaolei();
	a.mima = mima;
	a.number = number;
	name[i] = a;
	System.out.print("ÇëÊäÈëÕËºÅ£º");
	number = in.nextLine();
	System.out.print("ÇëÊäÈëÃÜÂë£º");
	mima = in.nextLine();
	
}
   System.out.println("µÇÂ¼..............1");
	System.out.println("×¢²á..............2");
	int i;
	i = in.nextInt();
	switch(i)
	{
	case 1:
		if(deng(name));
		{
			System.out.println("µÇÂ¼³É¹¦");
		}break;
	case 2:break;
		
	}
	}
	public static boolean deng(zhanghaolei []name)
	{Scanner in = new Scanner(System.in);
	String number;
	String mima;
	System.out.print("ÇëÊäÈëÕËºÅ£º");
	number = in.nextLine();
	System.out.print("ÇëÊäÈëÃÜÂë£º");
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
	/*ÊµÏÖ·½Ê½ÀàËÆ£¬Íê³É×¢²á°¸Àı¡£*/
   public static  void  zhuce(zhanghaolei []name)
   {   int a =1;
	   System.out.println("ÇëÊäÈë×¢²áºÅÂë");
	   Scanner in = new Scanner(System.in);
	   String number = in.nextLine();
	   System.out.println("ÇëÊäÈë×¢²áÃÜÂë");
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
		   System.out.println("×¢²á³É¹¦");
	   }
	   else {
		   System.out.println("×¢²áÊ§°Ü");
	   }
	   
	   
   }
}
