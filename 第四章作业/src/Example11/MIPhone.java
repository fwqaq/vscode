package Example11;

public class MIPhone implements SmartPhone{

	@Override
	public void receiveMessages() {
		// TODO Auto-generated method stub
		System.out.println("������Ϣ");
	}

	@Override
	public void call() {
		// TODO Auto-generated method stub
		System.out.println("��绰");
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
