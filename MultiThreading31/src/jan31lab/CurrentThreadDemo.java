package jan31lab;
import java.lang.Thread;

public class CurrentThreadDemo extends Thread {
	@Override
	public void run() {
		for (int i = 0; i < 5; i++) {
			printMyName();
		}
		super.run();
	}
	public void printMyName() {
		System.out.println("The Thread name is " + Thread.currentThread().getName());
	}
	public static void main(String[] args) {
		CurrentThreadDemo ttsn = new CurrentThreadDemo();
		ttsn.setName("created one");
		ttsn.start();

		Thread t2 = currentThread();
		//Create a thread object using currentThread() method.
		t2.setName("main one");

		for(int i = 0; i < 5; i++) {
			ttsn.printMyName();
		}

	}
}
