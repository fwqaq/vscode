package 第七单元;
/*
 * 创建一个People类，定义成员变量如编号、姓名、性别、年龄；  
 */
public class People {
        int number;
        String name;
        String sex;
        int age;
      public void People(int number1, String name1, String sex1, int age1)
      {
    	  number = number1;
    	  name = name1;
    	  sex = sex1;
    	  age = age1;
      }
      public void put()
      {
    	  System.out.println("学生编号:"+number);
    	  System.out.println("学生姓名:"+name);
    	  System.out.println("学生性别:"+sex);
    	  System.out.println("学生年龄:"+age);
      }
}
