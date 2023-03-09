package bookDetails50;

import java.sql.*;


import java.util.Scanner;

public class BookDetails50 {

	public static void main(String[] args) {
		Scanner  sc = new Scanner(System.in);
		try {
			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");


			PreparedStatement ps1 =con.prepareStatement("insert into  bookdetails50 values (?,?,?,?,?)");
			PreparedStatement ps2 =con.prepareStatement("Select * from bookdetails50");
			PreparedStatement ps3 =con.prepareStatement("Select * from bookdetails50 where code=?");   
			PreparedStatement ps4 =con.prepareStatement("Update bookdetails50 set price=? ,qty=? where code=?" );
			PreparedStatement ps5=con.prepareStatement("delete from bookdetails50 where code=?");


			while (true) {
				System.out.println("\n\n\t*****Choice******");
				System.out.println("\t1.AddBookDetails"
						+ "\n\t2.ViewAllBookDetails"
						+ "\n\t3.ViewBookByCode"
						+ "\n\t4.UpdateBookDetails(price/qty)"
						+ "\n\t5.DeleteBookByCode"
						+ "\n\t6.exit");
				System.out.println("\n\tEnter the Choice:");
				int ch = Integer.parseInt(sc.nextLine());
				switch (ch) {
				case 1:
					System.out.println("Enter the BookCode");
					String code= sc.nextLine();
					System.out.println("Enter the Book Name");
					String name= sc.nextLine();
					System.out.println("Enter the Book Author");
					String auhor= sc.nextLine();
					System.out.println("Enter the Book Price");
					String price= sc.nextLine();
					//					Float price= Float.parseFloat(sc.nextLine());
					System.out.println("Enter the Book Quantity");
					int qty= Integer.parseInt(sc.nextLine());

					//Adding data to PreparedStatement Object
					ps1.setString(1, code);
					ps1.setString(2, name);
					ps1.setString(3, auhor);
					ps1.setString(4, price);
					ps1.setInt(5, qty);
					int k=ps1.executeUpdate();//Execution
					if(k>0) {
						System.out.println("BookDetails inserted...");
					}
					break;
				case 2:
					ResultSet rSet= ps2.executeQuery();//Execution 
					while (rSet.next()) {
						System.out.println(rSet.getString(1)
								+" \t \t "+rSet.getString(2)
								+" \t \t "+rSet.getString(3)
								+" \t \t "+rSet.getString(4)
								+" \t \t "+rSet.getString(5));
					}//end of loop

					break;
				case 3:
					System.out.println("Enter the book Code");
					String gcode=sc.nextLine();
					ps3.setString(1, gcode);//set set given Code in ps3
					ResultSet rSet2 = ps3.executeQuery();
					if(rSet2.next()) {
						System.out.println(rSet2.getString(1)
								+" \t \t "+rSet2.getString(2)
								+" \t \t "+rSet2.getString(3)
								+" \t \t "+rSet2.getString(4)
								+" \t \t "+rSet2.getString(5));
					}//end of loop
					else  System.out.println("Invalid BookCode..");

					break;
				case 4:
					System.out.println("Enter the Code:");
					String gcode1=sc.nextLine();
					System.out.println("Enter the Price:");
					String dprice=sc.nextLine();
					System.out.println("Enter the qty:");
					int dqty= Integer.parseInt(sc.nextLine());

					ps4.setString(1,dprice);
					ps4.setInt(2, dqty);
					ps4.setString(3, gcode1);
					int k1=ps4.executeUpdate();
					if(k1>0) {
						System.out.println("BookDetails Updated...");
					}else  System.out.println("Invalid BookCode..");

					break;
				case 5:
					System.out.println("Enter the Code:");
					String gcode2=sc.nextLine();
					ps5.setString(1, gcode2);
					int k2=ps5.executeUpdate();
					if(k2>0) {
						System.out.println("BookDetails  Deleteed...");
					}else  System.out.println("Invalid BookCode..");
					
					
					break;
				case 6:
					System.out.println("Thank You Sir...");
					System.exit(0);
					break;
				default:
					break;
				}
			}


		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
