package setProducts;
import java.util.*;
public class ListSort3 {
	@SuppressWarnings("unchecked")
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try(s;){
			try {

				ArrayList<Products> al = new ArrayList<Products>();
				System.out.println("Enter the number of Productss:");
				int n = Integer.parseInt(s.nextLine());
				System.out.println("Enter "+n+" Products details");
				for(int i=1;i<=n;i++)
				{
					System.out.println("****ProductsDetails-"+i+"****");
					System.out.println("Enter the code:");
					String code = s.nextLine();
					System.out.println("Enter the Name:");
					String name = s.nextLine();
					System.out.println("Enter the Price:");
					float price = Float.parseFloat(s.nextLine());
					System.out.println("Enter the qty:");
					int qty = Integer.parseInt(s.nextLine());
					al.add(new Products(code,name,price,qty));
					//Adding Products to ArrayList
				}//end of loop
				System.out.println("====before Sorting===");
				al.forEach((k)->{
					System.out.println(k.toString());
				});

				while(true) {
					System.out.println("=====Choice(sorting)====");
					System.out.println("1.name\n2.price\n3.qty\n4.exit");
					System.out.println("Enter the Choice:");
					switch(Integer.parseInt(s.nextLine())) {
					case 1:
						NameSorting ns = new NameSorting();
						al.sort(ns);
						System.out.println("====Sorting by Name===");
						al.forEach((k)->{
							System.out.println(k.toString());
						});
						break;
					case 2:
						PriceSorting ps = new PriceSorting();
						al.sort(ps);
						System.out.println("====Sorting by Price===");
						al.forEach((k)->{
							System.out.println(k.toString());
						});
						break;
					case 3:

						QtySorting qs = new QtySorting();
						al.sort(qs);
						System.out.println("====Sorting by Qty===");
						al.forEach((k)->{
							System.out.println(k.toString());
						});
						break;
					case 4:
						System.out.println("Process Stopped...");
						System.exit(0);
					default:
						System.out.println("Invalid Choice...");
					}//end of switch
				}//end of loop
			}catch(Exception e) {e.printStackTrace();}
		}//end of try
	}
}