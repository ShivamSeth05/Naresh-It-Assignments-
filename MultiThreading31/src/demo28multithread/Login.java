package demo28multithread;

public class Login {
	public static void login() {
		for(int i=1;i<=5;i++) {
			System.out.println("Login : Ram");
			try {

				Thread.sleep(2000);
			}
			catch(InterruptedException ie)

			{ie.printStackTrace();}
		}//end of loop
	}
}
