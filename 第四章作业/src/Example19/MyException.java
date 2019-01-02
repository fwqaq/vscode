package Example19;

public class MyException extends Exception{
 public MyException() {
	 super();
 }
 public MyException(String name) {
	 System.out.println(name);
 }
}
