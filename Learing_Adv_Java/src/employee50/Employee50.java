/*
 * DB Table : Employee50(id,name,desg,bsal,totSal)
Construct JDBC Application to perform the following operations:
 1.AddEmployee
 2.ViewAllEmployees
 3.ViewEmployeeById
 4.UpdateEmployee(bSal)
 5.DeleteEmployee
totSal = bSal+HRA+DA;
HRA = 93% of bSal
DA = 61% of bSal
 */
package employee50;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Scanner;

public class Employee50 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try(sc;) {
			while (true) {
				System.out.println("*********Choice*********");
				System.out.println(" 1.AddEmployee\r\n"
						+ " 2.ViewAllEmployees\r\n"
						+ " 3.ViewEmployeeById\r\n"
						+ " 4.UpdateEmployee(bSal)\r\n"
						+ " 5.DeleteEmployee\n"
						+ " 6.Exit");
				Connection co=DriverManager.getConnection
						("jdbc:Oracle:thin:@localhost:1521:orcl","C##batch111","shivam");
				PreparedStatement ps1 = co.prepareStatement
						("insert into Employee50 values (? ,?, ?, ?, ?)");
				PreparedStatement ps2 = co.prepareStatement("Select * from Employee50");
				PreparedStatement ps3 = co.prepareStatement("Select * from Employee50 where id =?");
				PreparedStatement ps4 = co.prepareStatement("Update Employee50 set bsal=?,totsal=? where id=?");
				PreparedStatement ps5 = co.prepareStatement("Delete from Employee50 where id=?");
				switch (Integer.parseInt(sc.nextLine())) {
				case 1:
					System.out.println("Enter the Emp Id");
					String id=sc.nextLine();
					System.out.println("Enter the Emp Name");
					String name=sc.nextLine();
					System.out.println("Enter the Emp Desigination");
					String dsg=sc.nextLine();
					System.out.println("Enter the Emp Basic Salary");
					long bsal=Long.parseLong(sc.nextLine());
					Float totsal=(float) (((float)bsal*0.93)+((long)bsal*0.61));
					ps1.setString(1, id);
					ps1.setString(2, name);
					ps1.setString(3, dsg);
					ps1.setLong(4, bsal);
					ps1.setFloat(5, totsal);
					int k=ps1.executeUpdate();
					if(k>0)System.out.println("Data Inserted...");

					break;
				case 2:

					int ck = ps2.executeUpdate();
					if (ck>0) {
						ResultSet rs = ps2.executeQuery();
						while (rs.next()) {
							//							
							System.out.println(rs.getString(1)+"\t"+
									rs.getString(2)+"\t"+
									rs.getString(3)+"\t"+
									rs.getString(4)+"\t"+
									rs.getString(5)
									);
						}
					}else 	System.out.println("Data Not Available");


					break;

				case 3:
					System.out.println("Enter the Employe Id");
					String sid = sc.nextLine();
					ps3.setString(1,sid);

					ResultSet rs1 =ps3.executeQuery();
					while(rs1.next()){
						System.out.println(rs1.getString(1)+"\t"+
								rs1.getString(2)+"\t"+
								rs1.getString(3)+"\t"+
								rs1.getString(4)+"\t"+
								rs1.getString(5)
								);

					}

					break;
				case 4:
					System.out.println("Enter the Employe Id");
					String sid1 = sc.nextLine();//101
					ps3.setString(1,sid1);
					ResultSet rs14=ps3.executeQuery();
					if(rs14.next()) {
						System.out.println("Enter the Employe Basic Salary");
						float bsal1 = Float.parseFloat(sc.nextLine());//150000
						Float totsal1=(float) (((float)bsal1*0.93)+((Float)bsal1*0.61));//1800

						ps4.setFloat(1, bsal1);	
						ps4.setFloat(2, totsal1);
						ps4.setString(3, sid1);
						int k1 =ps4.executeUpdate();
						if (k1>0) {
							System.out.println("Table Updatede....");
						}
					}else {
						System.out.println("Data not found....");
					}


					break; 
				case 5:
					System.out.println("Enter the Employe Id");
					String dsid = sc.nextLine();
					ps5.setString(1,dsid);
					int k2=ps5.executeUpdate();
					if (k2>0) {
						System.out.println("Table Updatede....");
					}else {
						System.out.println("Data not found....");
					}
					break;
				case 6:
					System.out.println("\t\t_________Thank You_________");
					System.exit(0);

					break;

				default:
					break;
				}
			}

		}//end if try
		catch (Exception e) {
			e.printStackTrace();
		}

	}

}
