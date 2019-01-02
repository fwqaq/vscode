package Example11;

public class MIPhone implements SmartPhone{

	@Override
	public void receiveMessages() {
		// TODO Auto-generated method stub
		System.out.println("接受消息");
	}

	@Override
	public void call() {
		// TODO Auto-generated method stub
		System.out.println("打电话");
	}

	@Override
	public void faceTime() {
		// TODO Auto-generated method stub
		System.out.println("FaceTime");
	}
	public void useMIUI() {
		
		receiveMessages();
		call();
		faceTime();
	}

}
