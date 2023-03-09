package feb04;

public class SynchronizationTest2 {
	public static void main(String[] args) {
		Reserve2 obj=new Reserve2(1);
		Thread t1=new Thread(obj);
		Thread t2=new Thread(obj);
		t1.setName("First Person");
		
		t2.setName("Second Person");
		t1.start();
		t2.start();
		
	}

}
