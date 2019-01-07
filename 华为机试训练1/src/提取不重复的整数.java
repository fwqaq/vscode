import java.util.HashSet;
import java.util.Scanner;
public class 提取不重复的整数 {//输出变为是有序的了，而不是所给定的无序的
public static void main(String[] args) {
	int a;
	Scanner in = new Scanner(System.in);
	a = in.nextInt();
	HashSet<Integer> set = new HashSet<Integer>();
	while(a>0)
	{
		int b = a%10;
		a = a/10;
		if(set.add(b)) {
			System.out.print(b);
		}
		
	}

}
}
