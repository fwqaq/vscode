package ���嵥Ԫ;

import java.util.Scanner;

public class ��ӡ�������ڱ� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        //���21���͵�ĳһ���µ����ڱ�,��2000��1��1��Ϊ��㣬����Ϊ����
	    int years;
        int month;
        Scanner in = new Scanner(System.in);
        System.out.println("��������Ҫ��ѯ���꣺");
        years = in.nextInt();
        System.out.println("��������Ҫ��ѯ���£�");
        month = in.nextInt();
      
        int startyear;
        int startmonth;
        int sumdays=0;//��2000��1��1�յ�����
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
        }//������ݵ�����
        
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
      }//�����·ݵ�����
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
    }//�ж�һ���µ�����
    int dayday=1;   
    int [][]yuefen;
   yuefen = new int[5][7]; //��ά����洢����
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
   
      System.out.println("��"+"  \t"+"һ"+" \t"+"��"+" \t"+"��"+" \t"+"��"+" \t"+"��"+" \t"+"��");
      
       
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


