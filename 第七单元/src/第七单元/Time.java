package ���ߵ�Ԫ;
/*
 * 
 * ��������������Աhour��minute��second�������캯��
 * 
 * 
 */
public class Time {
    int hour;
    int minute;
    int second;
   
    public void Time() {
    	hour = 0;
    	minute = 0;
    	second = 0;
    }
    public void Time(int hour1, int minute1,int second1) {
       if(hour1>0&&hour1<24)
    	{
    	   hour = hour1;
    	}
       else {
    	   hour = 0;
       }
        minute = minute1;
        second = second1;		
    }
    public void put()//24Сʱ��ʽ���
    {
    	System.out.println("����24Сʱ��ʽ��ʱ���ǣ�"+hour+"ʱ"+minute+"��"+second+"��");
    }
    public void put1() {//12Сʱ���
    	String times;
    	if(hour<12)
    		times = "am" ;
    	else {
    		times = "pm";
    	}
    	System.out.println("����12Сʱ��ʽ��ʱ����:"+times+":"+(hour%12)+"ʱ"+minute+"��"+second+"��");
    }
}
