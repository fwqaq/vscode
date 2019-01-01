package com.nn;

public class 反转字符串 {
/*
  请实现一个算法，在不使用额外数据结构和储存空间的情况下，翻转一个给定的字符串(可以使用单个过程变量)。
给定一个string iniString，请返回一个string，为翻转后的字符串。保证字符串的长度小于等于5000
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
