package jan27RegisterLogin_Lambda;
//Convert above program into LambdaExpression.
public class DemoThread3 {
	//Convert above program into Anonymous InnerClasses
	public static void main(String[] args) {
		new Thread(()-> {
				// TODO Auto-generated method stub
				for (int i = 0; i <=5; i++) {
					System.out.println("Rsgister :"+ "Shivam");
					try {
						Thread.sleep(2000);
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
			
		}).start();

		//Thread-2
		new Thread(() -> {
			for (int i = 0; i <=5; i++) {
				System.out.println("Login :"+ "Vishal");
				try {
					Thread.sleep(2000);
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
			
		}).start();
	}

}
