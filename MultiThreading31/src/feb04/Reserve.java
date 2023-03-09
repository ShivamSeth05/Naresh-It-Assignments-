package feb04;

public class Reserve extends Thread {
	int available=1;
	int wanted;
	Reserve(int i){
		wanted=i;
		System.out.println("Available Breaths="+available);
	}
	public void run(){
		if(available>=wanted){
			String name=Thread.currentThread().getName();
			System.out.println(wanted+"Berths Reserved For"+name);
			try{
				Thread.sleep(1500);
				available=available-wanted;
			}
			catch(InterruptedException ie){
				ie.printStackTrace();
			}
		}
		else
			System.out.println("Sorry, no breaths");
	}
}


