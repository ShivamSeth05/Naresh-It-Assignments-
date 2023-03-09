package jan30mutliThreading;

public class Printer {
	public void print(int n , String name) {
		for (int i = 0; i <=5; i++) {
			System.out.println(i +" print for"+name);
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
