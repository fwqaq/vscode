package test01;

import org.junit.Before;
import org.junit.Test;

public class test01 {
	@Test
	public void test01() {
		System.out.println("a");
	}
	@Before
	public void test02() {
		System.out.println("b");
	}
}
