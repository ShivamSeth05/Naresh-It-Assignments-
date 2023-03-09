package jan27RegisterLogin;

public class DemoThread1 {

	public static void main(String[] args) {
		Register ob1 = new Register();
		Login ob2 = new Login();
		
		Thread t1 = new Thread(ob1);
		Thread t2 = new Thread(ob2);
		
		t1.setName("Shivam");
		t2.setName("Vishal");
		
		t1.start();
		t2.start();
	}

}
