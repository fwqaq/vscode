package com.nn;
/*
 * ���дһ�����������ַ����еĿո�ȫ���滻Ϊ��%20�����ٶ����ַ������㹻�Ŀռ����������ַ���
 * ����֪���ַ�������ʵ����(С�ڵ���1000)��ͬʱ��֤�ַ����ɴ�Сд��Ӣ����ĸ��ɡ�
����һ��string iniString Ϊԭʼ�Ĵ����Լ����ĳ��� int len, �����滻���string��
 */
public class sum {
	public static void main(String[] args) {
		System.out.println(Sum_Solution(5));
		}
    public static int Sum_Solution(int n) {
		if( n==1) {
			return 1;
		}
		return n+Sum_Solution(n-1);
        
    }
}
