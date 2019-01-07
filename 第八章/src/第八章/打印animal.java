package 第八章;
/*
 * 9.实现代码，当打印某个Animal(包含颜色、姓名、年龄属性)
 * 对象引用变量时，不打印地址值,打印格式为：”XX颜色的XX”。
 * 
 * */
public class 打印animal {
public static void main(String[] args) {
	animals number1 = new animals();
	animals number2 = new animals();
	number1.animals("小美", "黄", "成年");
    number2.animals("小花", "绿", "中年");
    number1.put();
    number2.put();
    
}
}
