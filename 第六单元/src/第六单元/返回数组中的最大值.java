package 第六单元;

public class 返回数组中的最大值 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     int []a = {2,3,1,4,5,7,5};
     System.out.println(max(a));
	}
    public  static int max(int []a)
    {
    	int i=0;
    	int max=a[0];
    	while(i < a.length)
    	{
    		if(max < a[i])
    			max = a[i];
    		    i++;
    	}
    	return max;
    }
}
