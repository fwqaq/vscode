package ������Ԫ;

public class �����ַ������鲢���������еڶ����ַ��� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String []zifuchuan = {"����","����","����"};
		String []zifuchuan1= {"����"};
    System.out.println(name(zifuchuan));
    System.out.println(name(zifuchuan1));
	}
    public static String name(String []zifuchuan)
    {
    if(zifuchuan.length <2)
    {
    	return "�Բ���û�������";
    }
    else {
    	return zifuchuan[1];
    }
    }
}
