package jan01lab;

public class DemoThread9 {

	public static void main(String[] args) {
		Thread t1 = new Thread(()->{
			for(int i=1;i<=5;i++) {
				if(i==2) Thread.yield();
				System.out.println("Task-1");
				try {
					Thread.sleep(2000);
				}catch(Exception e) {e.printStackTrace();} }//end of loop
		});

		Thread t2 = new Thread(()->{
			for(int i=1;i<=5;i++) {
				System.out.println("Task-2");
				try {
					Thread.sleep(2000);
				}catch(Exception e)
				{e.printStackTrace();}
			}//end of loop
		});

		t1.setPriority(Thread.MIN_PRIORITY+2);
		t2.setPriority(Thread.MAX_PRIORITY);
		System.out.println("Priority of main() : " +Thread.currentThread().getPriority()); 
		System.out.println("Priority of t1:"+t1.getPriority());
		System.out.println("Priority of t2	:"+t2.getPriority());

		t1.start();
		/*try {
		 t1.join();
		 }catch(Exception e) {}*/
		//Thread.yield();
		t2.start();

	}}
