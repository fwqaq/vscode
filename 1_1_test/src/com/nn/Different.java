package com.nn;
/*
 * 
 * ��ʵ��һ���㷨��ȷ��һ���ַ����������ַ��Ƿ�ȫ����ͬ����������Ҫ������ʹ�ö���Ĵ洢�ṹ��
����һ��string iniString���뷵��һ��boolֵ,True���������ַ�ȫ����ͬ��False���������ͬ���ַ���
��֤�ַ����е��ַ�ΪASCII�ַ����ַ����ĳ���С�ڵ���3000��
 */
public class Different {
  public static void main(String[] args) {
	  	System.out.println(checkDifferent("abcd"));
}
  public static boolean checkDifferent(String iniString) {
      // write code here
      for(int i = 0;i<iniString.length();i++) {
		//��һ�κ����һ�γ��ֵ��±���ͬ��ʱ���ֻ�ǳ�����һ��	
		if(iniString.indexOf(iniString.charAt(i)) != iniString.lastIndexOf(iniString.charAt(i))) {
		return false;
		}
	}
	return true;
  }
}