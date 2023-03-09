package jan31lab;
/*
 * Write a program to create a class ‘ThreadDemo’ which extends Thread class and having some
instance variables as following ,
private String firstName;
private String secondName;
private long aWhile;
ThreadDemoclass implements a parameterized constructor as following to initialize the above
instance variables.
public ThreadDemo (String firstName, String secondName, long delay) {
this.firstName = firstName;
this.secondName=secondName;
While = delay;
setDaemon(true);
}
This ThreadDemo class also overriding the run() method as following
public void run() {
try{
while(true) {
System.out.print(firstName);
sleep(aWhile);
System.out.print(secondName + "\n");
}
} catch (InterruptedException e) {
System.out.println(firstName + secondName + e);
}
}
2
write a program to create a class ‘ThreadDemoTest’ which implements main method as per the
following structure.
public static void main(String[] args) {
//Create instances of ThreadDemo class by passing appropriate parameters to their parameterized
constructors.
Thread first = new ThreadDemo("A ", "a ", 200L);
Thread second = new ThreadDemo("B ", "b ", 300L);
Thread third = new ThreadDemo("C ", "c ", 500L);
System.out.println("Press Enter when you have had enough...\n"); //Start the threads . .
first.start();
second.start();
third.start(); try {
System.in.read(); System.out.println("Enter pressed...\n");
} catch (IOException e) {
//Display the Exception in the console.
}
}
Note: In the above program try to implement Runnable interface instead of extending Thread
class.
 */
public class ThreadDemo implements Runnable {
	private String firstName;
	private String secondName;
	private long aWhile;

	public ThreadDemo(String firstName, String secondName, long aWhile) {
		super();
		this.firstName = firstName;
		this.secondName = secondName;
		this.aWhile = aWhile;
		//		setDaemon(true);
	}

	@Override
	public void run() {
		while(true) {
			try {
				System.out.print(firstName);
				Thread.sleep(aWhile);
				System.out.print(secondName + "\n");
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

	}





}
