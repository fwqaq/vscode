package 第五单元;

import java.util.Scanner;

public class 返回最小元素的下标如果这个元素大于一 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     System.out.println("输入一个数组的长度");
     int length;
     Scanner in = new Scanner(System.in);
     length = in.nextInt();
     int []shuzu;
     shuzu = new int[length];
     for (int i = 0; i < shuzu.length; i++) {
		shuzu[i] = in.nextInt();
	}
     int min = shuzu[0];
     int a =0;
      for (int i = 0; i < shuzu.length; i++) {
		if (shuzu[i] < min) {
			min = shuzu[i];
			a = i;
		}
	}
      if(min>1) {
     System.out.println("最小元素的小标是："+a);
	}
	else {
		System.out.println("数组中最小的元素是小于一或者等于一的");
	}

}
}
