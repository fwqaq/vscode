package 第三章;

import java.util.Scanner;

public class Z最大的数 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     int x;
     int y;
     int z;
     Scanner in =new Scanner (System.in);
     x = in.nextInt();
     y = in.nextInt();
     z = in.nextInt();
     int max;
     max=x;
     if(y > max)
    	 max=y;
     if(z > max)
    	 max=z;
     System.out.println("最大的数字是"+max);
	}

}
