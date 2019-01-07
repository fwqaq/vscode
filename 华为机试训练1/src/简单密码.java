import java.util.Scanner;

public class ¼òµ¥ÃÜÂë {
public static void main(String[] args) {
	String name;
	Scanner in = new Scanner(System.in);
	name = in.next();
	char []arr = name.toCharArray();
	for (int i = 0; i < arr.length; i++) {
		put(arr[i]);
	}
}
public static void put(char a)
{
	if(a>='A'&&a<='Z')
	{
		 if(a!='Z')
					System.out.print((char)(a+1+32));
			     else{
			         System.out.print('a');}
	}
	else{
		if(a>='0'&&a<='9')

	{
		System.out.print(a);
	}
		else {
			if(a>='a'&&a<='c')
			{
				System.out.print("2");
			}
			if(a>='d'&&a<='f')
			{
				System.out.print("3");
			}
			if(a>='g'&&a<='i')
			{
				System.out.print("4");
			}
			if(a>='j'&&a<='l')
			{
				System.out.print("5");
			}
			if(a>='m'&&a<='o')
			{
				System.out.print("6");
			}
			if(a>='p'&&a<='s')
			{
				System.out.print("7");
			}if(a>='t'&&a<='v')
			{
				System.out.print("8");
			}
			if(a>='w'&&a<='z')
			{
				System.out.print("9");
			}
		}
		
	}
	
}
}
