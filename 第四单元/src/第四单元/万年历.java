package ���ĵ�Ԫ;

import java.util.Scanner;

public class ������ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		��2000��1��1��������Ϊ��㿪ʼ���㣻
          int years;
          int month;
          int day;
          Scanner in = new Scanner(System.in);
          System.out.println("��������Ҫ��ѯ���꣺");
          years = in.nextInt();
          System.out.println("��������Ҫ��ѯ���£�");
          month = in.nextInt();
          System.out.println("��������Ҫ��ѯ���գ�");
          day = in.nextInt();
          int startyear;
          int sumdays=0;
          int startmonth;
          int startday = 1;
          if( !(years % 4== 4 && years != 0 ||years % 400 == 0)&& month == 2 && day==29)
          {
        	  System.out.println("������������ղ�����");
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
        case 1: System.out.println("����������һ");break;
        case 2: System.out.println("���������ڶ�");break;
        case 3: System.out.println("������������");break;
        case 4: System.out.println("������������");break;
        case 5: System.out.println("������������");break;
        case 6: System.out.println("������������");break;
        default: System.out.println("������������");break;
        }
       }   
	}

}
