

import java.util.Scanner;

public class ¼ÆËã×Ö·û¸öÊý {
public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	String name;
	String a;
	name = in.next();
	a = in.next();
	name = name.toUpperCase();
	a = a.toUpperCase();
	char b = a.charAt(0);
	System.out.println(name);
	System.out.println(a);
	int sum = 0;
	for (int i = 0; i < name.length(); i++) {
		 if(name.charAt(i) == b)
         {
        	 sum++;
         }
	}
	System.out.println(sum);
}
}
