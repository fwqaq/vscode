package 第四单元;

public class 能被三或者四整除的数字 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
  int i=1;
  while(i<=100)
  {
	  if(i%3==0||i%4==0)
		  System.out.println(i);
	  i++;
  }
	}

}
