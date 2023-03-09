package jan27RegisterLogin;

public class Register implements Runnable{

	@Override
	public void run() {
		for (int i = 0; i <=5; i++) {
			System.out.println("Login :"+ Thread.currentThread().getName());
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
