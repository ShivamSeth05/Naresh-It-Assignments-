package feb02;

public class AccountTester1 {

	public static void main(String[] args) {
		Account user1 = new Account();//5000
		Account user2 = new Account();//5000
		new Thread(new Runnable() {
			
			@Override
			public void run() {
				user2.deposit(1500);//6500
				user1.withdraw(50);//4550
				
				System.out.println("USer1 "+user1.balance);
				System.out.println("USer2 "+user2.balance);
			}
		}).start();

	}

	

}
