package �ڰ���;
/*
 * 6.��дһ�����򣬽������һ���ı��еĸ������ʵ���ĸ˳��ת
 * ��To be or not to be��,����ɡ�oT eb ro ton ot eb�� 
 */

import java.util.Scanner;

public class �������ʵ�˳�� {
 public static void main(String[] args) {
	String danci = "To be or not to be";
	char []aaa = danci.toCharArray();
	int start=0;
	int end=0;
	int number=0;
	for (int i = 0; i < danci.length(); i++) { 
	     if(aaa[i]==' ')
	     {
	    	 number++;
	    	
	     }
	}
	number = number+1;
	for (int i = 0; i < number; i++) {
		
		if(start != 0)
			start = end +1; 
		
		else start = end;
		end = start;
		for (int j = start; j < aaa.length; j++) {
			if(aaa[j] != ' ')
			{
				end++;
			}
			if(aaa[j]==' ')
				break;
		}
		int end1 = end-1;
		while(start<end1)
		{  
			char c = aaa[start];
			aaa[start] = aaa[end1];
			aaa[end1] = c;
			start++;
			end1--;
		}
		
		
	}
	String m = new String(aaa);
	System.out.println(aaa);
}
}
