package jan30mutliThreading;



public class User1 implements Runnable {
	public Printer p;
	public User1(Printer p) {
		this.p=p;
	}
	@Override
	public void run() {
		synchronized(p) {
			p.print(5, "Shivam");
		}
	}

}
