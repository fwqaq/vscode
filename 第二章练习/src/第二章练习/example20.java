package µÚ¶şÕÂÁ·Ï°;

public class example20 {
public static void main(String[] args) {
	int[] number = {5,6,9,8,21,5,4,78,65,32,1};
	int min = getMin(number);
	System.out.println(min);
}
public static int getMin(int []number) {
	int min = number[0];
	for(int i = 1;i< number.length;i++)
	{
		if(number[i]<min)
		{
			min = number[i];
		}
	}
	return min;
}
}
