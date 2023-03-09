package jan31lab;
/*
 * Write a program to create a class ‘NewThread’ which implements Runnable interface having a
instance variable ‘t’ of thread type. This class ‘NewThread’ implements a constructor as
following
NewThread() {
//create a thread object by passing appropriate parameters and assign it to instance variable.
t = newThread(this, "Demo Thread");
//Display the thread in the console with some appropriate message.
System.out.println("Child thread: " + t);
t.start(); // Start the thread
}
The class ‘NewThread’ also override the run method as per the following structure.
public void run() {
try {
for(inti = 5; i > 0; i--) {
System.out.println("Child Thread: " + i);
Thread.sleep(500);
}
} catch (InterruptedException e) {
 System.out.println("Child interrupted.");
}
3
 System.out.println("Exiting child thread.");
}
Write a program to create a class ‘MainThread’ which implements main method as per the
following structure.
public static void main(String args[]) {
new NewThread();
try{
for(inti = 5; i > 0; i--) {
System.out.println("Main Thread: " + i);
Thread.sleep(1000);
}
} catch (InterruptedException e) {
 System.out.println("Main thread interrupted.");
}
 System.out.println("Main thread exiting.");
}
Note : In the above program extend Thread class instead of implementing Runnable Interface.
 */
public class NewThread implements Runnable {
	NewThread() {
		//create a thread object by passing appropriate parameters and assign it to instance variable.
		Thread t = new Thread(this, "Demo Thread");
		//Display the thread in the console with some appropriate message.
		System.out.println("Child thread: " + t);
		t.start(); // Start the thread
	}
	public void run() {
		try {
			for(int i = 5; i > 0; i--) {
				System.out.println("Child Thread: " + i);
				Thread.sleep(500);
			}
		} catch (InterruptedException e) {
			System.out.println("Child interrupted.");
		}

		System.out.println("Exiting child thread.");
	}
}
