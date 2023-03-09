package feb06;

class Producer extends Thread{
	StringBuffer sb;
	boolean dataprodover=false;//dataprodover will be true when data production is over
	Producer(){
		sb=new StringBuffer();
	}
	public void run(){
		for(int i=1;i<=10;i++){
			try{
				sb.append("item"+i+"\n");
				Thread.sleep(1000);
				//System.out.println("appending");
			}
			catch(Exception e)
			{
				e.printStackTrace();
			}
		}
		dataprodover=true;
	}
}