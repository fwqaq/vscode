package 第四单元;

public class 九九乘法表 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
  int a=1;
  int b=1;
  while(a<=9)
           {   
	          b=1;
	           while(b<=a)
	         {
	       	  System.out.print(b+"*"+a+"="+a*b+"\t");
	    	  b++;
	           }
	          a++;
	              System.out.println();
	  
                }

}
	}
