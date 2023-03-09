package jan31lab;

import java.io.IOException;

public class ThreadDemoTest {
	public static void main(String[] args) {
		//Create instances of ThreadDemo class by passing appropriate parameters to their parameterized constructors.
//		ThreadDemo fDemo= new ThreadDemo("A", "a", 200L);
		Thread first = new Thread(new ThreadDemo("A", "a", 200L));
		ThreadDemo secondD = new ThreadDemo("B ", "b ", 300L);
		Thread second = new Thread(secondD);
		ThreadDemo thirdD = new ThreadDemo("C ", "c ", 500L);
		Thread third = new Thread(thirdD);
		
		System.out.println("Press Enter when you have had enough...\n"); //Start the threads . .
		first.start();
		second.start();
		third.start(); 
		try {
			System.in.read(); 
			System.out.println("Enter pressed...\n");
//			System.exit(0);
		} catch (IOException e) {
			e.printStackTrace();

		}

	}
}
