package 第七单元;

import java.util.Scanner;

/*
 * 3.编写程序，模拟银行账户功能。要求如下：
属性、账号、储户姓名、地址、存款余额、最小余额。
方法、存款、取款、查询。根据用户操作显示储户相关信息。
如存款操作后，显示储户原有余额、今日存款数额及最终存款余额；
取款时，若最后余额小于最小余额，拒绝收款，并显示“至少保留余额XXX”
 */
public class yinhang {
      int number;
      String name;
      String address;
      int shengyu;
      int minshengyu;
      public void yinhang (int number1,String name1,String address1,int shengyu1,int minshengyu1)
      {   number = number1;
          name = name1;
          address = address1;
          shengyu = shengyu1;
          minshengyu  = minshengyu1;
    	  
      }
      public void putmoney()//存款
      {
    	  System.out.println("输入你的存款数额");
    	  int number;
    	  Scanner in = new Scanner(System.in);
    	  number = in.nextInt();
    	  if(number <100)
    	  System.out.println("存入数额不能少于100元");
    	  else {
    		  shengyu = shengyu +number;
    		  System.out.println("存入成功");
    	  }
    	  
      }
      public void getmoney()
      {   Scanner in = new Scanner(System.in);
    	  System.out.println("输入您需要取出的money");
    	  int number;
    	  number = in.nextInt();
    	  if(shengyu-number>minshengyu)
    	  {
    		  shengyu = shengyu - number;
    		  System.out.println("取款成功");
    	  }
    	  else {
    		  System.out.println("您的钱不够了，你只能取出"+(shengyu-minshengyu)+"只要要保留"+minshengyu);
    	  }
      }
      public void getinfo() {
    	  System.out.println(number);
    	  System.out.println(name);
    	  System.out.println(address);
    	  System.out.println(shengyu);
    	  System.out.println(minshengyu);
      }
}
