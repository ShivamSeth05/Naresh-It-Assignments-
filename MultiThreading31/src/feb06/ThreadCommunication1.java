package feb06;

public class ThreadCommunication1 {

	public static void main(String[] args) {
		Producer obj1=new Producer();
		Consumer obj2=new Consumer (obj1);
		Thread t1=new Thread(obj1);
		Thread t2=new Thread(obj2);
		t1.start();
		t2.start();
	}
}
