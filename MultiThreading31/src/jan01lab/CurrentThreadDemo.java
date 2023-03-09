package jan01lab;
/*
 a. Write a program to create a class ‘CurrentThreadDemo’ which
implements main method as per the following structure.
public static void main(String args[]) {
//Create a object of java.lang.Thread class using the ‘currentThread()’
method of java.lang.Thread class.
//Print the above thread in the console with message as it is the current
thread.
//give a new name to this thread using setName() method of
java.lang.Thread() class.
//Print the name of the thread in the console with message as it is
the name of the thread after name change.
try {
for (intn = 5; n > 0; n--) {
//print the value of ‘n’ in the console.
//make the thread sleep for 1000 milisecs
}
} catch (InterruptedException e) {
//Print the exception message in the console as main thread
is inturupted.
}
}
Expected out put :
Current thread: Thread[main,5,main]
After name change: Thread[My Thread,5,main]
5 4 3 2 1
 */
public class CurrentThreadDemo {
	public static void main(String args[]) {
		//Create a object of java.lang.Thread class using the ‘currentThread()’method of java.lang.Thread class.
		Thread t1 = new Thread();
		//Print the above thread in the console with message as it is the current thread.
		System.out.println(t1);
		//give a new name to this thread using setName() method ofjava.lang.Thread() class.
		t1.setName("My Thrad");
		//Print the name of the thread in the console with message as it is the name of the thread after name change.
		System.out.println(t1);
		try {
			for (int n = 5; n > 0; n--) {
				
				//print the value of ‘n’ in the console.
				System.out.println(n);
				//make the thread sleep for 1000 milisecs
				Thread.sleep(1000);
			}
		} catch (InterruptedException e) {
			//Print the exception message in the console as main thread inturupted.
			System.out.println(e);
		}
	}
}
