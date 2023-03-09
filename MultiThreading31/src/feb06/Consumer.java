package feb06;
class Consumer extends Thread{
	Producer prod;
	Consumer(Producer prod) {

		this.prod=prod;
	}
	public void run(){
		try{
			while(!prod.dataprodover)
				Thread.sleep(100);
		}
		catch(Exception e){
			e.printStackTrace();
		}
		System.out.print(prod.sb);
	}
}