package bookDetails;

import java.sql.SQLException;
import java.util.Scanner;

public class InsertQuery {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the code");
		String code=sc.nextLine();
		System.out.println("Enter the book name");
		String name=sc.nextLine();
		System.out.println("Enter the auther");
		String auther=sc.nextLine();
		System.out.println("Enter the price");
		String price=sc.nextLine();
		System.out.println("Enter the qty");
		long qty=sc.nextLong();


		sc.close();
		Conn con = new Conn();
		try {
			@SuppressWarnings("unused")
			int a=con.stmt.executeUpdate("insert into Bookdetails50 values ( '"+code+"' ,' "+name+"','"+auther
					+"','"+price+"',"+qty+")");
			if(a>0) {
				System.out.println("Data Inserted....");
			}

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}


	}

}
