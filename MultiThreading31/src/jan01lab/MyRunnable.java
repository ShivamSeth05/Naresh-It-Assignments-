package jan01lab;

public class MyRunnable implements Runnable {
	String name;

	public MyRunnable(String name) {
		super();
		this.name = name;
	}

	@Override
	public void run() {
		while (true) {
			System.out.println(name);
		}

	}

}
