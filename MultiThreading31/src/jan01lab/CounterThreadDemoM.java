package jan01lab;

public class CounterThreadDemoM  {

	public static void main(String[] args) {
		//Create a object ‘thread1’ of ‘CounterThread’ type name it as thread1 by passing this name to it’s constructor.
		CounterThread thread1 = new CounterThread("First");
		//Set the priority of above thread ‘thread1’ as 10 by using setPriority() method .
		thread1.setPriority(10);
		//Now Create a object ‘thread2’ of ‘CounterThread’ type name it as thread2 by passing this name to it’s constructor.
		thread1.start();
		CounterThread thread2 = new CounterThread("Second");
		//Set the priority of above thread ‘thread2’ as 1 by using setPriority() method .
		thread2.setPriority(1);
		
//		thread1.start();
		thread2.start();
		
		//Now start thread2() method using start() method.
		//Now start thread1() method using start() method.


	}

}
