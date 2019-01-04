package 第六单元;

public class 接收字符串数组并返回数组中第二个字符串 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String []zifuchuan = {"李四","张三","王二"};
		String []zifuchuan1= {"李四"};
    System.out.println(name(zifuchuan));
    System.out.println(name(zifuchuan1));
	}
    public static String name(String []zifuchuan)
    {
    if(zifuchuan.length <2)
    {
    	return "对不起，没有这个人";
    }
    else {
    	return zifuchuan[1];
    }
    }
}
