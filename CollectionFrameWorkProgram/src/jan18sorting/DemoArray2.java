package jan18sorting;
import java.util.*;

class DemoArray2 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		try(s;){
			try {
				System.out.println("Enter the number of books:");
				int n = Integer.parseInt(s.nextLine());
				BookData a[] = new BookData[n];
				System.out.println("Enter the "+n+" Book Details:");
				for(int i=0;i<a.length;i++)
				{
					System.out.println("***BookDetails-"+(i+1)+"***");
					System.out.println("Enter the BookCode:");
					int code = Integer.parseInt(s.nextLine());
					System.out.println("Enter the BookName:");
					String name = s.nextLine();
					a[i]=new BookData(code,name);
				}//end of loop
					for(int i=0;i<a.length;i++)
					{
						System.out.println(a[i].toString()+" ");
					}//end of loop
				
				Arrays.sort(a);//Sorting process
				System.out.println("====After Sorting(Ascending)===");
				for(int i=0;i<a.length;i++)
				{
				System.out.println(a[i].toString()+" ");
				}//end of loop
				System.out.println("====After Sorting(Descending)===");
				for(int i=a.length-1;i>=0;i--)
				{
				System.out.println(a[i].toString()+" ");
				}//end of loop
			}catch (Exception e) {
				// TODO: handle exception
			}
		}catch (Exception e) {
			// TODO: handle exception
		}
	}
}

