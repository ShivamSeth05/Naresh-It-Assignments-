package jan01lab;
/*
 * Write a program to create a class ‘CounterThread’ which extends
java.lang.Thread class having an instance variable ‘name’ of String type.
The class ‘CounterThread’ implements a parameterized constructor to
initialize the above declared Instance variable name.
The class ‘CounterThread‘ also override the run() method
of java.lang.Thread class as following.
public void run() {
intcount = 0;//Declare a local variable to
while (true) {
try
{
sleep(100);
} catch (InterruptedException e) {
}
if (count == 50)//if the count value is 50 initialize it to
zerocount = 0;
//print the value of name and count the console.
}
}
Write a program to create a class ‘CounterThreadDemo’ which
implements main method as per the following structure.
public static void main(String[] args) {
//Create a object ‘thread1’ of ‘CounterThread’ type name it as thread1 by
passing this name to it’s constructor.
//Set the priority of above thread ‘thread1’ as 10 by using
setPriority() method .
//Now Create a object ‘thread2’ of ‘CounterThread’ type name it as
thread2 by passing this name to it’s constructor.
//Set the priority of above thread ‘thread2’ as 1 by using
setPriority() method .
//Now start thread2() method using start() method.
//Now start thread1() method using start() method.

 */
public class CounterThread  extends Thread  { 

	String name;

	public CounterThread(String name) {
		super();
		this.name = name;

	}
	@Override
	public void run() {
		int count = 0;//Declare a local variable to
		while (true) {
			try
			{
				Thread.sleep(100);
			} catch (InterruptedException e) {
			}
			if (count == 50)//if the count value is 50 initialize it to zero
				count = 0;
			//print the value of name and count the console.
			System.out.println(count);
			System.out.println(name);
			count++;
		}
	}

}
