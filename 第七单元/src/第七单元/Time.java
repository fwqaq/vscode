package 第七单元;
/*
 * 
 * 包含三个整数成员hour，minute，second两个构造函数
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
    public void put()//24小时格式输出
    {
    	System.out.println("现在24小时格式的时间是："+hour+"时"+minute+"分"+second+"秒");
    }
    public void put1() {//12小时输出
    	String times;
    	if(hour<12)
    		times = "am" ;
    	else {
    		times = "pm";
    	}
    	System.out.println("现在12小时格式的时间是:"+times+":"+(hour%12)+"时"+minute+"分"+second+"秒");
    }
}
