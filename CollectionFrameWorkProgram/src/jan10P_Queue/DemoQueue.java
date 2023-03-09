package jan10P_Queue;

import java.util.PriorityQueue;

public class DemoQueue {

	@SuppressWarnings("removal")
	public static void main(String[] args) {
		
			 PriorityQueue<Integer> pq = new	PriorityQueue<Integer>();
			 for(int i=11;i<=15;i++)
			 {
			 pq.add(new Integer(i));
			 }//end of loop
			 System.out.println(pq.toString());
			 pq.add(new Integer(500));
			 System.out.println(pq.toString());
			 pq.remove();
			 pq.remove();
			 System.out.println(pq.toString());
			 System.out.println("peek ele:"+pq.peek());
			 System.out.println("element:"+pq.element());
			 System.out.println(pq.toString());
			 System.out.println("poll:"+pq.poll()); 
			 System.out.println(pq.toString());
			 pq.offer(new Integer(500));
			 System.out.println(pq.toString());
			 pq.offer(700);
			 System.out.println(pq.toString());
	}

}
