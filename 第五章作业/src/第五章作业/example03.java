package 第五章作业;

public class example03 {
public static void main(String[] args) {
	String str = "sdhk.sld.dfj ";
	String name[] = str.split(".");//字符串截取。
	System.out.println(str.toUpperCase());//转换为大写
	System.out.println(str.toLowerCase());//转换为小写
	System.out.println(str.length());//求取字符串长度
	System.out.println(str.charAt(0));//返回指定索引的值
	System.out.println(str.trim());//去掉首位的空格
	char []name1 = str.toCharArray();//将字符串转换为字符数组
	str.equals("askf");//比较两个字符串是否相同
	
}
}
