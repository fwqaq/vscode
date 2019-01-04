package 第六单元;

public class 重载函数计算两个三个四个数的平均数 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     System.out.println(avg(2,3));
     System.out.println(avg(3,5,1));
     System.out.println(avg(8,6,5,4));
	}
    public static double avg(int a,int b)
    {
    	return (a+b)/2.0;
    }
    public static double avg(int a,int b,int c)
    {
    	return (a+b+c)/3.0;
    }
    public static double avg(int a,int b,int c,int d)
    {
    	return (a+b+c+d)/4.0;
    }
    
}
