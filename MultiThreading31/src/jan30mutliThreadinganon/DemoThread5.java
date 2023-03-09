package jan30mutliThreadinganon;

public class DemoThread5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Printer() {
//		public void print(int n , String name) {
//			for (int i = 0; i <=5; i++) {
//				System.out.println(i +" print for"+name);
//				try {
//					Thread.sleep(2000);
//				} catch (InterruptedException e) {
//					e.printStackTrace();
//				}
//			}
//		}
		};
		
		User1 ob1 = new User1(new Printer() );
		User2 ob2 = new User2(new Printer());

		Thread t1 = new Thread(ob1);
		Thread t2 = new Thread(ob2);


		t1.start();
		t2.start();
	}

}
