

import java.util.Scanner;

public class Á¬ÐøµÄ×Ö·û´® {
public static void main(String[] args) {
	
	Scanner in = new Scanner(System.in);

	while(in.hasNext()) {
	String name;
	name = in.nextLine();
	int x = 0;
	if(name.length()%8==0)
		x = name.length()/8;
	else {
		x = name.length()/8+1;
	}
	int a = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < 8; j++) {
			if(a>=name.length())
				System.out.print("0");
			else {
				System.out.print(name.charAt(a));	
			}
			a++;
		}
		if(x!=0)
		System.out.println();
	}}
}
}
