package 第八章;
/*
 * 7.String s=”name=zhangsan age=18 classNo=090728”;  
 *   将上面的字符串拆分，结果如下: 
 *   zhangsan 18 090728 
 *   substring(    )截取字符串中间部分；
 */
public class 拆分 {
public static void main(String[] args) {
	String s = "name=zhangsan age=18 classNo=090728";
	char []name = s.toCharArray();
    int start = 0;
    int end = 0;
   for (int j = 0; j < 3; j++) {
	   if(start == 0)
		   {
		   start = end;
		   }
	   else 
		   {
		   start = end+1;
		   }
	int a = 0;
    int b = 0;
    for (int i =start; i < name.length; i++) {
   
	if(name[i] == '=')
	{
		start = i;
		a = 1;
	}
	if(name[i] == ' ')
	{
		end = i;
		b = 1;
	}
	if(i == name.length-1)
		{
		end = i+1;
		b = 1;
		}
	if(a == 1&& b == 1)
	{
		break;
	}
    }
    System.out.println(s.substring(start+1, end));
    }
}
}
