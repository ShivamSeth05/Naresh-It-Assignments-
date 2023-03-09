package feb04;

class Reserve2 implements Runnable{
	int available=2;
	int wanted;
	Reserve2(int i){
		wanted=i;
		System.out.println("Available Breaths="+available);
	}
	public synchronized void reservation(){
		if(available>=wanted){
			String name=Thread.currentThread().getName();
			System.out.println(wanted+"Berths Reserved For"+name);
			try{
				Thread.sleep(1500);
				available=available-wanted;
			}catch(InterruptedException ie){
				ie.printStackTrace();
			}
		}
		else
			System.out.println("Sorry, no breaths");
	}
	public void run(){
		reservation();
	}

}