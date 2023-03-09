package feb02;

public  class TicketDispenser  {
	int  allotedSeats=100,wanted;
	public TicketDispenser(int i) {
		wanted=i;
	}
	synchronized int allotSeatNumber() {
		
		if(allotedSeats>wanted) {
			try{
				Thread.sleep(150);
				
				String name=Thread.currentThread().getName();
				System.out.println(wanted+"Ticket For"+name);
				allotedSeats=allotedSeats-wanted;
				
			}catch(InterruptedException ie){
				ie.printStackTrace();
			}
		}else
			return -1;
		return allotedSeats;
	
	}


}
