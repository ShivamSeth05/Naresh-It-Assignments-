package jan09;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class IntArraySet {

	@SuppressWarnings("removal")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> al = new	ArrayList<Integer>();
		for(int i=11;i<=20;i++)
		{
			al.add(new Integer(i));
		}//end of loop
		System.out.println(al.toString());
		al.remove(new Integer(15));//remove by Object System.out.println(al.toString());
		Integer ele = al.get(4);//get element by index 
		System.out.println("Ele at index"+ele.toString());
		al.set(4,new Integer(500));//set value by index
		System.out.println(al.toString());
		al.add(4, new Integer(11));//add by index 
		System.out.println(al.toString());
		al.remove(5);//remove by index
		
		System.out.println(al.toString());
		System.out.println(al.get(5));
		
		System.out.println(al.set(2, 50));
		System.out.println("index of object 18 : "+ al.indexOf(new Integer(18)));
		System.out.println("last index of Object 11 : "+ al.lastIndexOf(11)); 
		List<Integer> l = al.subList(2, 7);
		System.out.println("===SubList<E>===="); System.out.println(l.toString());
		System.out.println("===List<E> to Array==="); Object o[] = al.toArray();
		for(Object k : o)
		{
			System.out.print(k.toString()+" ");
		}//end of loop
		System.out.println("\n===ListIterator<E>===="); 
		ListIterator<Integer> li = al.listIterator(); 
		System.out.print("Forward : ");
		while(li.hasNext()) {
			System.out.print(li.next()+" ");
		}//end of loop
		System.out.print("\nBackward : ");
		while(li.hasPrevious()) {
			System.out.print(li.previous()+" ");
		}//end of loop
	}

}
