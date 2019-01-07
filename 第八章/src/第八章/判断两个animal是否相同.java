package 第八章;
/*
 * 8.判断两个Animal(包含颜色、姓名、年龄属性)对象是否相同，
 * 我们的比较规则为：只要姓名一样，就判断两个对象相同。
 */
public class 判断两个animal是否相同 {
public static void main(String[] args) {
	animals number1 = new animals();
	animals number2 = new animals();
	number1.animals("李想", "黄色", "成年");
    number2.animals("李想", "绿色", "中年");
    boolean like = number1.name.equals(number2.name);
    System.out.println(like);
}
}
