package �ڶ�����ϰ;

public class example18 {
public static void main(String[] args) {
	print99();
	print99(6);
}
public static void print99() {
	for(int i = 1;i<= 9;i++) {
		for (int j = 1; j <= i; j++) {
			System.out.print(j+"*"+i+"="+(i*j)+"\t");
		}
		System.out.println();
	};
}
public static void print99(int i) {
	for (int j = 1; j <= i; j++) {
		System.out.print(j+"*"+i+"="+i*j+"  ");
	}
}
}
