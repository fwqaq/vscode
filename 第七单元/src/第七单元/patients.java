package 第七单元;

public class patients {
     public static void main(String[] args) {
		Patient patient1 = new Patient();
		patient1.Patient("小花", "女", 20, 45.0, false);
		patient1.put();
		Patient patient2 = new Patient();
		patient2.Patient("小小", "男", 19, 46.3, true);
		patient2.put();
	}
}
