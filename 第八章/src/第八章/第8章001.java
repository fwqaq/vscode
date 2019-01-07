package 第八章;
/*
 * 1.int[] arr = {34,12,89,68};
 * 将一个int[]中元素转成字符串  格式 [34,12,89,68]
 * 
 * */
public class 第8章001 {
  public static void main(String[] args) {
	int []arr = {34,12,89,68};
	String fix="";
	/*for (int i = 0; i < arr.length; i++) {
		fix = fix +arr[i];
		if(i!=arr.length-1)
		fix = fix + ",";
	}*/
	for (int i = 0; i < arr.length; i++) {
		fix = fix +String.valueOf(arr[i]);
		if(i!=arr.length-1)
		fix = fix + ",";
	}
	System.out.println(fix);
}
}
