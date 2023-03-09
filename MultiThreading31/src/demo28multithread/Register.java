package demo28multithread;

public class Register {
	public static void register() {
		for(int i=1;i<=5;i++) {
			System.out.println("Regisger : Alex");
			try {
				Thread.sleep(2000);
			}
			catch(InterruptedException ie)

			{ie.printStackTrace();}
		}//end of loop

	}
}
