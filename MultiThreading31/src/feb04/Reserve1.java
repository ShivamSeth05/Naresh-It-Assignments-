package feb04;

class Reserve1 implements Runnable{
	int available=2;
	int wanted;
	Reserve1(int i){
		wanted=i;
	}
	public void run(){
		synchronized(this){
			System.out.println("Available Breaths="+available);
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
}
