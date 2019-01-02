package 第四单元;

import java.util.Scanner;

public class 万年历 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		以2000年1月1日星期六为起点开始计算；
          int years;
          int month;
          int day;
          Scanner in = new Scanner(System.in);
          System.out.println("请输入你要查询的年：");
          years = in.nextInt();
          System.out.println("请输入你要查询的月：");
          month = in.nextInt();
          System.out.println("请输入你要查询的日：");
          day = in.nextInt();
          int startyear;
          int sumdays=0;
          int startmonth;
          int startday = 1;
          if( !(years % 4== 4 && years != 0 ||years % 400 == 0)&& month == 2 && day==29)
          {
        	  System.out.println("您输入的年月日不存在");
          }
          else
          {
        	  
          
          for(startyear=2000;startyear<years;startyear++)
          {
        	  if(startyear%4==0&&startyear%100!=0||startyear%400==0)
        	  {
        		  sumdays = sumdays + 366;
        	  }else {
        		  sumdays = sumdays + 365;
        	  }
          }
        for(startmonth=1;startmonth<month;startmonth++)
        {
        	if(startmonth==1||startmonth==3||startmonth==5||startmonth==7||startmonth==8||startmonth==10||startmonth==12)
        	{
        		sumdays = sumdays + 31;
        	}
        	if(startmonth==4||startmonth==6||startmonth==9||startmonth==11)
        	{
        		sumdays = sumdays + 30;
        	}
        	if(startmonth==2&&(startyear%4==0&&startyear%100!=0||startyear%400==0))
        	{
        		sumdays = sumdays + 29;
        	}
        	if(startmonth==2&&(!(startyear%4==0&&startyear%100!=0||startyear%400==0)))
        	{
        		sumdays = sumdays + 28;
        	}
        }
        sumdays = sumdays + (day-startday+1);
        int week;
        week = (sumdays+5) % 7;
        switch (week)
        {
        case 1: System.out.println("这天是星期一");break;
        case 2: System.out.println("这天是星期二");break;
        case 3: System.out.println("这天是星期三");break;
        case 4: System.out.println("这天是星期四");break;
        case 5: System.out.println("这天是星期五");break;
        case 6: System.out.println("这天是星期六");break;
        default: System.out.println("这天是星期日");break;
        }
       }   
	}

}
