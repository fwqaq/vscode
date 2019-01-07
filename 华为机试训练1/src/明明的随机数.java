

import java.util.Collection;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;
import java.util.Iterator;
public class 明明的随机数 {
public static void main(String[] args) {
int a;
Scanner in = new Scanner(System.in);
a = in.nextInt();//输入随机数的个数
TreeSet<Integer> set = new TreeSet<Integer>();
for(int i = 0;i<a;i++) {
	int b = in.nextInt();
	set.add(b);
}
Iterator<Integer> iter =  set.iterator();
while(iter.hasNext())
{
	System.out.println(iter.next());
}
}
}

