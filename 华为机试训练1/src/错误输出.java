import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class ´íÎóÊä³ö {
public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	String name;
	name = in.next();
	int hang;
	int sum = 0;
	hang = in.nextInt();
	String []arr = name.split("/");
	System.out.println(arr[arr.length-1]+" "+hang+ " "+ sum);
	HashSet<String> set = new HashSet<String>();
	for (int i = 0; i < arr.length; i++) {
		set.add(arr[i]);
		System.out.println(arr[i]);
		System.out.println(set.hashCode());
	}
	set.add("abc");
}
}
