package ���嵥Ԫ;

import java.util.Random;

public class ��������������������в��Ҳ����ظ� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     int []a;
     a = new int[5];
     Random r = new Random();
    
     int i=0;
     int j=1;
     while(i<5)
     { 
    int index = r.nextInt(10)+1;
       for(int k=0;k<i;k++)
       {
    	   if(a[k]==index)
    	   {
    		   j=0;
    		   break;
    	   }
       }
       if(j==1)
       {
    	   a[i]=index;
    	   i++;
       }
     }
for (int j2 = 0; j2 < a.length; j2++) {
	System.out.println(a[j2]);
}
	
	}
}
