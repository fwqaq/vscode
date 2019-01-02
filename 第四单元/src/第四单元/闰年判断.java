package 第四单元;

public class 闰年判断 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         int i;
         for(i=1;i<=2000;i++)
         {
        	 if(i%4==0&&i%100!=0||i%400==0)
        		 System.out.println(i);
         }
	}

}
