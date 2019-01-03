package 第五章作业;

import java.util.Random;

public class example11 {
public static void main(String[] args) {
	Random r = new Random();
	for (int i = 0; i < 5; i++) {
		System.out.println(r.nextInt());
		for (int j = 0; j < 5; j++) {
			System.out.println(r.nextInt(10));
		}
	}
}
}
