package 第五章作业;

public class example05 {
public static void main(String[] args) {
	String str = "ni hao wo zai shankeda ";
	str.trim();//删除前后的空格
	String str1 = str.replace("shankeda","beijindaxue");
	System.out.println(str.trim()+" "+str1);
	
}
}
