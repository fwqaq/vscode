import java.util.Scanner;

public class 二进制一的个数 {
public static void main(String[] args) {
	int x;
	Scanner in = new Scanner(System.in);
	x = in.nextInt();
	int sum = 0;
	while(x>0) {
		if(x%2==1)
			{
			sum++;
			}
		x = x/2;
	}
	System.out.println(sum);
}
}
