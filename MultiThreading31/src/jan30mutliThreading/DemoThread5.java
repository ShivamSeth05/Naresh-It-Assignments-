package jan30mutliThreading;

public class DemoThread5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Printer p = new Printer();
		
		User1 ob1 = new User1(p);
		User2 ob2 = new User2(p);

		Thread t1 = new Thread(ob1);
		Thread t2 = new Thread(ob2);


		t1.start();
		t2.start();
	}

}
