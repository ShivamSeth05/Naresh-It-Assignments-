package jan30mutliThreadinganon;

public class User2 implements Runnable{

	public Printer p;
	public User2(Printer p) {
		this.p=p;
	}
	public void run() {
		synchronized(p) {
			p.print(5, "Ram");
		}
	}

}
