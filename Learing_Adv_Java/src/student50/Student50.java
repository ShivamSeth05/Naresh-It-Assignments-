/*
 * Assignment:
Assignment-2:
DB Table : Student50(rollNo,name,branch,totmarks,per,grade)

SQL> create table Student50(
  2  rollNo number(15),
  3  name varchar2(20),
  4  branch varchar(20),
  5  totmarks number(3),
  6  per number(3,2),
  7  grade varchar2(20));

Construct JDBC Application to perform the following operations:
1.AddStudent
2.ViewAllStudents
3.ViewStudentByRollNo
4.UpdateStudent(totMarks)
5.DeleteStudent

totMarks = s1+...+s6
per=
grade=
 */
package student50;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import java.util.Scanner;

public class Student50 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try(sc;) {
			while (true) {
				System.out.println("*********Choice*********");
				System.out.println("1.AddStudent\r\n"
						+ "2.ViewAllStudents\r\n"
						+ "3.ViewStudentByRollNo\r\n"
						+ "4.UpdateStudent(totMarks)\r\n"
						+ "5.DeleteStudent\r\n"
						+ "6.Exit");
				Connection co=DriverManager.getConnection
						("jdbc:Oracle:thin:@localhost:1521:orcl","C##batch111","shivam");
				PreparedStatement ps1 = co.prepareStatement
						("insert into Student50 values (? ,?, ?, ?, ? ,?)");
				PreparedStatement ps2 = co.prepareStatement("Select * from Student50");
				PreparedStatement ps3 = co.prepareStatement("Select * from Student50 where rollNo =?");
				PreparedStatement ps4 = co.prepareStatement("Update Student50 set totmarks=?,per=?,grade=? where rollNo=?");
				PreparedStatement ps5 = co.prepareStatement("Delete from Student50 where rollNO=?");
				try {
					switch (Integer.parseInt(sc.nextLine())) {
					case 1:
						System.out.println("Enter the Student Roll No");
						String rollNo=sc.nextLine();
						System.out.println("Enter the Student Name");
						String name=sc.nextLine();
						System.out.println("Enter the Branch");
						String bra=sc.nextLine();
						System.out.println("Enter the 6 sub marks");
						Integer ob[]= new Integer[6];
						int totsum=0;
						for (int i = 0; i < 6; i++) {
							ob[i]=Integer.parseInt(sc.nextLine());
							totsum=totsum+ob[i];
						}

						float per=totsum/6;

						String grade =Grade.calGrade(per);
						ps1.setString(1, rollNo);
						ps1.setString(2, name);
						ps1.setString(3, bra);
						ps1.setLong(4, totsum);
						ps1.setFloat(5, per);
						ps1.setString(6, grade);
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
										rs.getString(5)+"%\t"+
										rs.getString(6)
										);
							}
						}else 	System.out.println("Data Not Available");


						break;

					case 3:
						System.out.println("Enter the Student rollNo");
						String rroolNo = sc.nextLine();
						ps3.setString(1,rroolNo);

						ResultSet rs1 =ps3.executeQuery();
						while(rs1.next()){
							System.out.println(rs1.getString(1)+"\t"+
									rs1.getString(2)+"\t"+
									rs1.getString(3)+"\t"+
									rs1.getString(4)+"\t"+
									rs1.getString(5)+"%\t"+
									rs1.getString(6)
									);

						}

						break;
					case 4:
						System.out.println("Enter the Student rollNo");
						String roll = sc.nextLine();//101
						ps3.setString(1,roll);
						ResultSet rs14=ps3.executeQuery();
						if(rs14.next()) {
							System.out.println("Enter the 6 sub marks");
							Integer ob1[]= new Integer[6];
							int totsum1=0;
							for (int i = 0; i < 6; i++) {
								ob1[i]=Integer.parseInt(sc.nextLine());
								totsum1=totsum1+ob1[i];
							}
							System.out.println(totsum1);
							float per1=(float)totsum1/6;
							String grade1 =Grade.calGrade(per1);
							System.out.println(grade1);
							ps4.setFloat(1, totsum1);	
							ps4.setFloat(2, per1);
							ps4.setString(3, grade1);
							ps4.setString(4, roll);
							int k1 =ps4.executeUpdate();
							if (k1>0) {
								System.out.println("Table Updatede....");
							}
						}else {
							System.out.println("Data not found....");
						}

						break;
					case 5:
						System.out.println("Enter the Student Roll NO ");
						String rollno1 = sc.nextLine();
						ps5.setString(1,rollno1);
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
						System.out.println("Wrong Choice...!");
						break;
					}
				} catch (Exception e) {
					e.printStackTrace();
				}
			}

		}//end if try
		catch (Exception e) {
			e.printStackTrace();
		}

	}



}


