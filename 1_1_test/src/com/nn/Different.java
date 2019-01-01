package com.nn;
/*
 * 
 * 请实现一个算法，确定一个字符串的所有字符是否全都不同。这里我们要求不允许使用额外的存储结构。
给定一个string iniString，请返回一个bool值,True代表所有字符全都不同，False代表存在相同的字符。
保证字符串中的字符为ASCII字符。字符串的长度小于等于3000。
 */
public class Different {
  public static void main(String[] args) {
	  	System.out.println(checkDifferent("abcd"));
}
  public static boolean checkDifferent(String iniString) {
      // write code here
      for(int i = 0;i<iniString.length();i++) {
		//第一次和最后一次出现的下标相同的时候就只是出现了一次	
		if(iniString.indexOf(iniString.charAt(i)) != iniString.lastIndexOf(iniString.charAt(i))) {
		return false;
		}
	}
	return true;
  }
}