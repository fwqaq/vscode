package 第五章作业;

public class example07 {
public static void main(String[] args) {
	StringBuffer sb = new StringBuffer();
	sb.append("ni hao wo zai shan ke da");
	sb.replace(0, 2, "abc");//替换
	sb.reverse();//反转形式
	sb.setCharAt(0, 'a');//修改指定索引上的字符
	System.out.println(sb.substring(5));
}
}
