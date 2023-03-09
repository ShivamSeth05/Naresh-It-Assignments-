package jan18sorting;

import java.util.Arrays;
import java.util.Scanner;

public class ArraySort {

	@SuppressWarnings("removal")
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try(s) {
			System.out.println("Enter size array:"); 
			int n = s.nextInt();
			Integer a[] = new Integer[n];
			System.out.println("Enter the "+n+" Integer eles:");
			for(int i=0;i<a.length;i++){
				a[i]=new Integer(s.nextInt()); 
			}//end of loop 
			System.out.println("\"====Before Sorting===\")");
			for (Integer integer : a) {
				System.out.print(integer.toString()+" ");
			}

			Arrays.sort(a);//Sorting process
			System.out.print("\n====After Sorting(Ascending)===\n");
			for(int i=0;i<a.length;i++)
			{
				System.out.print(a[i].toString()+" "); 
			}//end of loop
			System.out.println("\n====After	Sorting(Descending)===\n");
			for(int i=a.length-1;i>=0;i--)
			{
				System.out.print(a[i].toString()+" "); }//end of loop
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
