package 第三章;

import java.util.Scanner;

public class 春夏秋冬 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   int x;
  Scanner in =new Scanner (System.in);
  x= in.nextInt();
  switch (x/3)
  {
  case 1 : System.out.println("春天"); break;
  case 2 : System.out.println("夏天"); break;
  case 3 : System.out.println("秋天"); break;
  default: System.out.println("冬天");break;
  }
	}

}
