import java.util.Scanner;

public class ºÏ³ª¶Ó {
public static void main(String[] args) {
	int N;
	Scanner in = new Scanner(System.in);
	N = in.nextInt();
	int []arr;
	arr = new int[N];
	for (int i = 0; i < arr.length; i++) {
		arr[i] = in.nextInt();
	}
	int b = 0;
	for (int j = 1,max = arr[0]; j<arr.length; j++) {
		
		if(arr[j]>=max)
			b++;
		else {
			max = arr[j];
		}
		}
	int min = b;
	System.out.println(min);
	for (int i = 1; i < arr.length; i++) {
		int a = 0;
		for (int j = i-1,max = arr[i]; j >= 0; j--) {
			if(arr[j]>=max)
				a++;
			else {
				max = arr[j];
			}			
			}
			for (int k = i+1,max = arr[i]; k < arr.length; k++) {
				if(arr[k]>=max)
				a++;
				else {
					max = arr[k];
				}
			}
		if(min>a)
				min = a;
	}
	System.out.println(min);
}
}
