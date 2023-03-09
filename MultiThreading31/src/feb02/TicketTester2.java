package feb02;

public class TicketTester2 {
	public static void main(String[] args) {
		
		TicketDispenser obj=new TicketDispenser(1);
//		TicketDispenser user2=new TicketDispenser(1);
		new Thread(new Runnable() {
			@Override
			public void run() {
				for (int i = 0; i < 60; i++) {
					Thread.currentThread().setName("FirstUser ");
					
					System.out.println("User1 :"+obj.allotSeatNumber());

				}
				
			}
		}).start();
		
		new Thread(new Runnable() {
			
			@Override
			public void run() {
				// TODO Auto-generated method stub
				for (int i = 0; i < 60; i++) {
					Thread.currentThread().setName("Second User ");

					
					System.out.println("User2 :"+obj.allotSeatNumber());
				}
				
			}
		}).start();
		
	}
}
