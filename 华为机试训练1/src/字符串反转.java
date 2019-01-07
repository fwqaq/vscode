import java.util.Scanner;

public class ×Ö·û´®·´×ª {
public static void main(String[] args) {
	String str;
	Scanner in = new Scanner(System.in);
	str = in.next();
	char []arr = str.toCharArray();
	for (int i = arr.length-1; i >= 0; i--) {
		System.out.print(arr[i]);
	}
}
}
