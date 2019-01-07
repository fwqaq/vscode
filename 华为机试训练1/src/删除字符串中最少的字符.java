import java.util.Scanner;

public class 删除字符串中最少的字符 {
public static void main(String[] args) {
	String str;
	Scanner in = new Scanner(System.in);
	str = in.next();
	int []arr;
	arr = new int[26];
	for (int i = 0; i < str.length(); i++) {
		int b = (int)str.charAt(i)-97;
		arr[b]++;
	}
	int min = 0;
	for (int i = 0; i < arr.length; i++) {
		if(arr[i]!=0)
		{
			min = arr[i];
			break;
		}
	}
	for (int i = 0; i < arr.length; i++) {
		if(arr[i]>0&&arr[i]<min)
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < arr.length; i++) {
		if(arr[i]==min)
			arr[i]=0;
	}
	for (int i = 0; i < str.length(); i++) {
		if(arr[str.charAt(i)-97]!=0&&arr[str.charAt(i)-97]>min)
		{
			System.out.print(str.charAt(i));
		}
	}
}
}
