package jan5Sets;


import java.util.*;


public class Sets {

	public static void main(String[] args) {
		Set<Integer> ob =null;
	
		Scanner sc = new Scanner(System.in);
		try(sc;) {
			while (true) {
				System.out.println("1.HasSet");
				System.out.println("2.LinkHasSet");
				System.out.println("3.TreeSet");
				System.out.println("4.Exit");
				switch (sc.nextInt()) {
				case 1:
					ob =new HashSet<Integer>();
					System.out.println("========HashSet========");
					break;

				case 2:
					ob =new LinkedHashSet<Integer>();
					System.out.println("========LinkedHashSet========");
					break;

				case 3:
					ob=new TreeSet<Integer>();
					System.out.println("========TreeSet========");
					break;
				case 4:
					System.out.println("Exit");
					System.exit(0);

					break;
				default:
					System.out.println("Invalid input");
					break;
				}//end of switch
				xyz:
					while(true) {

						System.out.println("\n1.add");
						System.out.println("2.remove");
						System.out.println("3.display");
						System.out.println("4.Exit");
						switch (sc.nextInt()) {
						case 1:
							System.out.println("Enter the Element");
							ob.add( new Integer(sc.nextInt()));
							System.out.print(ob.toString());
							break;
						case 2:
							if(ob.isEmpty())System.out.println("Empty");
							else {
								System.out.println("Enter the Ele");
								Integer ele = sc.nextInt();
								if(ob.remove(ele)) {
									System.out.println("Element Removed...");
								}else System.out.println("NOt Found...");

							}
							break;

						case 3:
							System.out.println("Dispaly");
							ob.forEach((k)->{
								System.out.print(k.toString()+" ");
							});
							break;
						case 4:
							System.out.println("Exit");
							break xyz;

						default:
							break;
						}
					}//end of  inner while

			}//end of outer while
		} catch (Exception e) {
			// TODO: handle exception
		}


	}


}
