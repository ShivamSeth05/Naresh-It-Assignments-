package feb06;

public class Producer1  extends Thread{
	StringBuffer sb;
	Producer1(){
		sb=new StringBuffer();
	}
	public void run(){
		synchronized(sb){
			for(int i=1;i<=10;i++){
				try{
					sb.append("item"+i+"\n");
				}
				catch(Exception e)
				{
					e.printStackTrace();
				}
				
			}
			sb.notify();
		}
	}
}
