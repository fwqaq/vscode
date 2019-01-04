package 第六单元;

import java.util.Scanner;

/*
 * 
 * 
 *  将超市购物小票案例中，键盘录入部分封装为方法。
 *  将switch语句完成的三个分支代码逻辑封装为3个方法
 *	当用户输入1时，让用户输入所要购买的商品数量
 *	当用户输入2时，给用户打印出对应的购物小票
 *  当用户输入3时，退出系统
 * 
 * 
 * 
 * */
public class 超市小票 {

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
    	System.out.println("输入商品名称");
    	name[i] = in.next();
        System.out.println("输入商品数量");
    	int a = in.nextInt();
    	number[i] = a;
    	i++;
    	System.out.println("是否继续输入商品及数量，1继续0退出");
    	put = in.nextInt();
    } 
    }
    public static void DY(int []number,String []name)
    {
    	System.out.println("****\t**欢迎光临***\t***");
    	
    	for (int j = 0; j < name.length; j++) {
			if(number[j]!=0)
				System.out.println(name[j]+number[j]);
		}
    }
}
