package feb06;

public class ThreadCommunication2 {

	public static void main(String[] args) {
		Producer1 obj1=new Producer1();
		Consumer1 obj2=new Consumer1(obj1);
		Thread t1=new Thread(obj1);
		Thread t2=new Thread(obj2);
		t2.start();
		t1.start();
	}

}
