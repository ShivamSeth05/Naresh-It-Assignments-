package jan01lab;

public class TestClassRunableM extends Thread{
	//Create a reference ‘runner’ of Runnable interface using the parameterized 
	
	Runnable runner;	
//	constructor of ‘MyRunnable’ class passing ‘First’ as parameter.
	MyRunnable first = new MyRunnable("First");
	//Create an object ‘t’ of Thread type by passing the above Runnable
//	reference as parameter to Thread class constructror.
	Thread t = new Thread(runner);
	//Set minimum priority to the above created thread ‘t’ by passing
//	Thread.MIN_PRIORITY as parameter to the method setPriority() method
	
	//Now start the thread ‘t’ using start() method.
	//Assign new object of ‘MyRunnable’ class to the reference ‘runner’
//	using the parameterized constructor of MyRunnable class passing ‘second’ as parameter.
	
	//Reassign value to object ‘t’ passing ‘runner’ as parameter to Thread class constructor.
	//set The Priority as maximum to the thread object ‘t’ by passing
	
//	Thread.MAX_PRIORITY as parameter to the setPrority() method.
	//Now Start the above thread ‘t’ using start() method.
}
