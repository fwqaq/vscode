package 第五单元;

import java.util.Scanner;

public class 打印日历星期表 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        //输出21世纪的某一个月的日期表,以2000年1月1日为起点，这天为周六
	    int years;
        int month;
        Scanner in = new Scanner(System.in);
        System.out.println("请输入你要查询的年：");
        years = in.nextInt();
        System.out.println("请输入你要查询的月：");
        month = in.nextInt();
      
        int startyear;
        int startmonth;
        int sumdays=0;//到2000年1月1日的天数
        for(startyear=2000;startyear<years;startyear++)
        {
      	  if(startyear%4==0&&startyear%100!=0||startyear%400==0)
      	  {
      		  sumdays = sumdays + 366;
      	  }
      	  else 
      	  {
      		  sumdays = sumdays + 365;
      	  }
        }//计算年份的天数
        
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
      }//计算月份的天数
      sumdays = sumdays + 1;
      int week;
      week = (sumdays+5) % 7;
  
      int exchange=0;
  	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
  	{
  		exchange = 31;
  	}
  	if(month==4||month==6||month==9||month==11)
  	{
  		exchange = 30;
  	}
    if(startyear%4==0&&startyear%100!=0||startyear%400==0&&month==2)
    {
    	exchange = 29;
    }
    if(!(startyear%4==0&&startyear%100!=0||startyear%400==0)&&month==2)
    {
    	exchange = 28;
    }//判断一个月的天数
    int dayday=1;   
    int [][]yuefen;
   yuefen = new int[5][7]; //二维数组存储数据
     for(int m = 0; m < 5; m++)
     {
    	 for(int n = 0;n < 7&&week<7; n++)
             {  
    	 if(m==0)
    	 {
            yuefen[m][week] = dayday;
            week++;
            if(week==7)
               {
            	week=0;
               }
    		     }
               else {
            	   yuefen[m][n] = dayday;
               }
             dayday++;
                if(dayday>exchange)
                {
            	   break;
                 }
          }
     if(dayday>exchange)
     {
    	 break;
     }
     }
     for(int a = 0; a < week; a++)
     {
    	 yuefen[0][a]=0;
     }
   
      System.out.println("日"+"  \t"+"一"+" \t"+"二"+" \t"+"三"+" \t"+"四"+" \t"+"五"+" \t"+"六");
      
       
       for(int m = 0; m < 5; m++)
    	  {for(int n = 0;n<7;n++)
               {
    		  if(yuefen[m][n]==0)
    			  System.out.print(" "+"\t");
    		  else
    		    System.out.print(yuefen[m][n]+"\t");
               }
    	  System.out.println();
    	  }
     } 
		
	}


