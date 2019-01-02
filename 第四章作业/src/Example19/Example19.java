package Example19;

public class Example19 {
public static void main(String[] args) throws MyException {
	mydivide(4,0);
}
public static int mydivide(int x,int y) throws MyException
{
	if(y == 0) {
		throw new MyException("除数不能为0");
	}
	return x/y;
}
}
