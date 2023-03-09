package jan_19_sorting;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ListSort2 {

	@SuppressWarnings("unchecked")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		try(s;){
			try {
				System.out.println("Enter the number of books:");
				int n = Integer.parseInt(s.nextLine());
				ArrayList<BookData> al = new ArrayList<BookData>();
				System.out.println("Enter the "+n+" Book Details:");
				for(int i=1;i<=n;i++)
				{
					System.out.println("***BookDetails-"+(i+1)+"***");
					System.out.println("Enter the BookCode:");
					int code = Integer.parseInt(s.nextLine());
					System.out.println("Enter the BookName:");
					String name = s.nextLine();
					al.add(new BookData(code,name));
				}//end of loop
				System.out.println("====Before Sorting===");
				al.forEach((k)->{
					System.out.println(k.toString());
				});
				Collections.sort(al);//Sorting process
				System.out.println("====After Sorting===");
				al.forEach((k)->{
					System.out.println(k.toString());
				});
			}catch(Exception e) {e.printStackTrace();}
		}//end of try

	}
}



