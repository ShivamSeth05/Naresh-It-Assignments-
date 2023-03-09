package jdbcJan04;

import java.sql.SQLException;
import java.util.Scanner;

public class InsertQuery {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the id");
		String id=sc.nextLine();
		System.out.println("Enter the name");
		String name=sc.nextLine();
		System.out.println("Enter the City");
		String city=sc.nextLine();
		System.out.println("Enter the mailid");
		String maid=sc.nextLine();
		System.out.println("Enter the phno");
		long phno=sc.nextLong();

		sc.close();
		Conn con = new Conn();
		try {
			@SuppressWarnings("unused")
			int a=con.stmt.executeUpdate("insert into Customer50 values ( '"+id+"' ,' "+name+"','"+city
																			+"','"+maid+"',"+phno+")");
			if(a>0) {
				System.out.println("Data Inserted....");
			}

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}


	}

}
