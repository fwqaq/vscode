import java.util.Scanner;

public class Êý×Öµßµ¹ {
public static void main(String[] args) {
	int a;
	Scanner in = new Scanner(System.in);
	a = in.nextInt();
	while(a>0)
	{
		System.out.print(a%10);
		a = a/10;	
	}
}
}
