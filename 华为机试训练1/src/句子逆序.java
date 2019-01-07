import java.util.Scanner;

public class ¾ä×ÓÄæÐò {
public static void main(String[] args) {
	String str;
	Scanner in = new Scanner(System.in);
	str = in.nextLine();
	String []arr = str.split(" ");
	for (int i = arr.length-1; i >=0 ; i--) {
		System.out.print(arr[i]);
		if(i!=0)
		{
			System.out.print(" ");
		}
	}
}
}