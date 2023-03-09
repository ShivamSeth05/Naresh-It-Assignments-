package jan_19_sorting;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ListSort1 {

	@SuppressWarnings("removal")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		try(s;){
		try {
		ArrayList<Integer> al = new	ArrayList<Integer>();
		System.out.println("Enter number of eles to be added:");
		int n = s.nextInt();
		System.out.println("Enter "+n+"	elements:");
		for(int i=1;i<=n;i++)
		{
		al.add(new Integer(s.nextInt()));
		}//end of loop
		System.out.println("====Before	Sorting===");
		al.forEach((k)->{
		System.out.print(k.toString()+" ");
		});
		Collections.sort(al);//Sorting Process

		System.out.println("\n====After	Sorting===");
		al.forEach((k)->{
		System.out.print(k.toString()+" ");
		});
		}catch(Exception e) {e.printStackTrace();}
		}//end of try
	}

}
