import java.util.HashSet;
import java.util.Scanner;
public class ��ȡ���ظ������� {//�����Ϊ��������ˣ��������������������
public static void main(String[] args) {
	int a;
	Scanner in = new Scanner(System.in);
	a = in.nextInt();
	HashSet<Integer> set = new HashSet<Integer>();
	while(a>0)
	{
		int b = a%10;
		a = a/10;
		if(set.add(b)) {
			System.out.print(b);
		}
		
	}

}
}
