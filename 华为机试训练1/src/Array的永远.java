import java.util.Arrays;

public class ArrayµÄÓÀÔ¶ {
public static void main(String[] args) {
	int []a = new int[] {3,4,2,7,6,5,7,5,34,23};
//	Arrays.sort(a);
	for (int i = 0; i < a.length; i++) {
		System.out.print(a[i]+" ");
	}
	System.out.println(Arrays.binarySearch(a, 6));
}
}
