package student;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class StudentMain {

	@SuppressWarnings({ "unchecked" })
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		ArrayList<Student> al = new ArrayList<Student>();
		while(true){
			try{

				try {
					System.out.println("1.Add Student");
					System.out.println("2.View Student");
					System.out.println("3.View Student by roll no");
					System.out.println("4.Delete Student by roll no");
					System.out.println("5.Sort");
					switch (Integer.parseInt(s.nextLine())) {
					case 1: 
						System.out.println("Enter the number of Student:");
						int n = Integer.parseInt(s.nextLine());
						System.out.println("Enter "+n+" Student details");
						for(int i=1;i<=n;i++)
						{
							System.out.println("****ProductDetails-"+i+"****");
							System.out.println("Enter the Name:");
							String name = s.nextLine();
							System.out.println("Enter the RollNo.:");
							int rollno = Integer.parseInt(s.nextLine());
							System.out.println("Enter the Total marks:");
							float totmarks = Float.parseFloat(s.nextLine());
							System.out.println("Enter the per:");
							float per = Float.parseFloat(s.nextLine());
							System.out.println("Enter the Grade:");
							String grade = s.nextLine();
							//Adding Product to ArrayList
							al.add(new Student(rollno, name, totmarks, per, grade));
						}//end of loop
						break;
					case 2: 
						System.out.println("====before Sorting===");
						al.forEach((k)->{
							System.out.println(k.toString());
						});
						break;
					case 3:
						System.out.println("Enter the RollNo.:");
						String roll = s.nextLine();
						Iterator<Student>it2=al.iterator();
//						rty:
//						while(it2.hasNext()) {
//							Student p1=(Student)it2.next();
//							if(roll==p1.getRollNo()) {
//								it2.toString();
//								break rty;
////							break;
//							}
//						}


					case 4:
						if(al.isEmpty()) {
							System.out.println(" List sis Empty...");
						}else {
							System.out.println("Enter the Roll NO :");
							int roll1 = Integer.parseInt(s.nextLine());
							Iterator<Student>it3 = al.iterator();
							rty:
								while(it3.hasNext()) {
									Student p2 =(Student)it3.next();
									if(roll1==p2.getRollNo()) {
										it3.remove();
										break rty;
									}
								}//end of loop
							System.out.println("Product deleted...");
						}
						break;

					case 5:
						while(true) {
							System.out.println("=====Choice(sorting)====");
							System.out.println("1.SortbyRollNo\n2.SortbyPer\n3.SortByResult\n4.exit");
							System.out.println("Enter the Choice:");
							switch(Integer.parseInt(s.nextLine())) {
							case 1:
								SortbyRollNo ns = new SortbyRollNo();
								al.sort(ns);
								System.out.println("====Sorting by RollNo===");
								al.forEach((k)->{
									System.out.println(k.toString());
								});
								break;
							case 2:
								SortbyPer ps = new SortbyPer();
								al.sort(ps);
								System.out.println("====Sorting by Percentage===");
								al.forEach((k)->{
									System.out.println(k.toString());
								});
								break;
							case 3:
								SortByResult qs = new SortByResult();
								al.sort(qs);
								System.out.println("====Sorting by Result===");
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


					default:

					}//Switch


				}catch(Exception e) {e.printStackTrace();}//end of try

			}catch(Exception e) {e.printStackTrace();}//end of 
		}
	}

}
