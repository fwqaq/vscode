package 第五单元;

public class 倒序输出数组里的值 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      int []a= {1,3,5,7,9,11,13,15,17,19};
      int i=0;
      int j=a.length-1;
      int exchange;
      while(i < j)
      {
    	  exchange = a[i];
    	  a[i] = a[j];
    	  a[j] = exchange;
    	  i ++;
    	  j --;
      }
      for (int k = 0; k < a.length; k++) {
		System.out.println(a[k]);
	}
	}

}
