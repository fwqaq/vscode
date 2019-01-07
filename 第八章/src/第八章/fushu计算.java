package 第八章;

import java.util.Scanner;

public class fushu计算 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    fumath s1 = new fumath();
    fumath s2 = new fumath();
    s1.fumath(3.13, 5.20);
    s2.fumath(4.56, 5.20);
    fumath s3 ;
    System.out.println("---复数计算器---");
    System.out.println("1............ +");
    System.out.println("2............ -");
    System.out.println("3............ *");
    System.out.println("4............ ÷");
    System.out.println("0..........退出");
    int i;
    Scanner in = new Scanner(System.in);
    i = in.nextInt();
    while(i!=0)
    {
    	switch (i)
    	{
    	case 1:s3 = add(s1,s2);s3.put();break;
    	case 2:s3 = jian(s1,s2);s3.put();break;
    	case 3:s3 = ride(s1,s2);s3.put();break;
    	case 4:s3 = divide(s1,s2);s3.put();break;
    	case 0:break;
    	}
    	i = in.nextInt();
    }
	}

	public static fumath add( fumath s1,fumath s2)
	{   fumath s3 = new fumath();
		s3.shishu = s1.shishu +s2.shishu;
		s3.xushu = s2.xushu + s2.xushu;
		return s3;
    }
	public static fumath jian(fumath s1,fumath s2) {
		 fumath s3 = new fumath();
		s3.shishu = s1.shishu - s2.shishu;
		s3.xushu = s1.xushu  - s2.xushu;
		return s3;
	}
	public static fumath ride(fumath s1,fumath s2)
	{   fumath s3 = new fumath();
		s3.shishu  = s1.shishu*s2.shishu-(s1.xushu*s2.xushu);
		s3.xushu = s1.xushu*s2.xushu+s1.shishu*s2.xushu;
		return s3;
	}
	public static fumath divide(fumath s1,fumath s2) {
		 fumath s3 = new fumath();
		s3.shishu = (s1.shishu*s2.shishu+s1.xushu*s2.xushu)/(s2.shishu*s2.shishu+s2.shishu*s2.shishu);
		s3.xushu = (s1.xushu*s2.shishu-s1.shishu*s2.xushu)/(s2.shishu*s2.shishu+s2.shishu*s2.shishu);
		return s3;
	}
}