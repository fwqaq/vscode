package µÚÈıÕÂ;

import java.util.Scanner;

public class ³É¼¨ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
 int score;
 Scanner in = new Scanner (System.in);
 score = in.nextInt();
 switch(score/10)
 {
 case 10: System.out.println("A");break;
 case 9:  System.out.println("A");break;
 case 8: System.out.println("B");break;
 case 7: System.out.println("C");break;
 case 6: System.out.println("D");break;
 default : System.out .println("E");break;
 }
	}

}
