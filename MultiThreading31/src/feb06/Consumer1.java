package feb06;

public class Consumer1 extends Thread {
	Producer1 prod;
	Consumer1(Producer1 prod){
		this.prod=prod;
	}
	public void run(){
		synchronized(prod.sb)//wait till a notification is received from procedure
		{
			try{
				//while(!prod.dataprodover)
				prod.sb.wait();
				//Thread.sleep(100);
			}
			catch(Exception e){
				e.printStackTrace();
			}
			System.out.print(prod.sb);
		}
	}
}
