package 第七单元;

import java.util.Scanner;

/*
 * 6.声明Patient类表示在门诊中的病人,
 * 此类对象应包括name(a string),sex(a char),age(an integer),
 * weight(a float),allergies(a boolean).
 * 声明存取及修改方法.在一个单独的类中,声明测试方法,并生成两个patient对象,
 * 设置其状态并将信息显示在控制台。
 * 
 * */
public class Patient{
     String name;//病人姓名
     String sex;//病人性别
     int age;//病人年龄
     double weight;//病人体重
     boolean allergies;//病人是否过敏
     
     public void Patient(String name1,String sex1, int age1, double weight1,boolean allergies1)
     { name = name1;
     sex = sex1;
     age = age1;
     weight = weight1;
     allergies = allergies1;
     }
     
     public void adupt() {
    	 System.out.println("输入你想要修改的项");
    	 System.out.println("1............姓名");
    	 System.out.println("2............性别");
    	 System.out.println("3............年龄");
    	 System.out.println("4............体重");
    	 System.out.println("5..........过敏史");
    	 System.out.println("0............退出");
    	 Scanner in = new Scanner (System.in);
    	 int i = in.nextInt();
      while(i!=0)
             {
	   switch(i){
		   case 1:
			 String  name1 = in.next();name = name1; break;
		   case 2:
			 String  sex1 = in.next();sex = sex1; break;
		   case 3:
			 int age1 = in.nextInt();age = age1; break;
		   case 4:
			 int weight1 = in.nextInt();weight = weight1; break;
		   case 5:
			  boolean allergies1 = in.nextBoolean(); allergies = allergies1; break;
	             }
                }
            }
     
     public void put() {
    	 System.out.println("--------病人信息--------");
    	 System.out.println("-------姓名"+"  "+name+"-----");
    	 System.out.println("-------性别"+"  "+sex+"-----");
    	 System.out.println("-------年龄"+"  "+age+"-----");
    	 System.out.println("-------体重"+"  "+weight+"-----");
    	 if(allergies)
    	 System.out.println("-------过敏史"+" "+"是"+"-----");
    	 else  System.out.println("-------过敏史"+" "+"否"+"-----");
     }
}
