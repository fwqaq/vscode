package com.nn;

public class ��ת�ַ��� {
/*
  ��ʵ��һ���㷨���ڲ�ʹ�ö������ݽṹ�ʹ���ռ������£���תһ���������ַ���(����ʹ�õ������̱���)��
����һ��string iniString���뷵��һ��string��Ϊ��ת����ַ�������֤�ַ����ĳ���С�ڵ���5000
 */
public static void main(String[] args) {
	String abc = "sdhfkjafhkaf0";
	char []arr = abc.toCharArray();
	System.out.println(arr.length);
	for(int i = 0, j = arr.length-1;i < j;i++,j--) {
	  char x = arr[i];
	  arr[i] = arr[j];
	  arr[j] = x;
  }
  String str = new String(arr);
  System.out.println(str);

}
}
