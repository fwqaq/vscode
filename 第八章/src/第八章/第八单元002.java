package 第八章;

import java.util.Scanner;
/*
 * 2.查找指定文章中共出现多少个字母a。
 * 如果以a开头，则删除开头的a，最后将其全部转换为e。
 * 、startWith（ ）返回值是Boolean型，判断是否是给定字符开头的。
 * */
public class 第八单元002 {
public static void main(String[] args) {
	String mmmm;
	int x=0;
	Scanner in = new Scanner(System.in);
	mmmm = in.next();
	if(mmmm.startsWith("a"))//计算第一个是否是“a”;
	{
	mmmm=mmmm.substring(1, mmmm.length());
	 x++;
	}
	char []cs = mmmm.toCharArray();//将字符串放在字符数组中
	if(cs[0]==0)
		cs[0] = ' ';
	for (int i = 0; i < cs.length; i++) {
		if(cs[i]=='a')
			{cs[i] = 'e';
		      x++;
		      }
	}
	String m = new String(cs);//将字符串赋值给新的字符串数组；
	System.out.println("当中共有"+x+"个a");

	System.out.println(m);
}
}
