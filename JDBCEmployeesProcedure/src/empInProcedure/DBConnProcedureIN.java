package empInProcedure;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Scanner;

public class DBConnProcedureIN {

	public static void main(String[] args) throws SQLException {
		@SuppressWarnings("resource")
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the Emp ID:");
		long empId = Long.parseLong(s.nextLine());
		System.out.println("Enter the EmP Name:");
		String empName = s.nextLine();
		System.out.println("Enter the Emp Desg:");
		String empDesg = s.nextLine();

		System.out.println("Enter the House_No.:");
		String houseNo = s.nextLine();
		System.out.println("Enter the Street_Name:");
		String sName = s.nextLine();
		System.out.println("Enter the City:");
		String city = s.nextLine();
		System.out.println("Enter the State:");
		String state = s.nextLine();
		System.out.println("Enter the Pincode:");
		int pinCode = Integer.parseInt(s.nextLine());

		System.out.println("Enter the MailId:");
		String mId = s.nextLine();
		System.out.println("Enter the PhoneNo:");
		long phNo = Long.parseLong(s.nextLine());

		System.out.println("Enter the Basic Sal:");
		long bsal = (long) Float.parseFloat(s.nextLine());
		float hra = (float) (bsal * 0.93);
		float da = (float) (bsal * 0.61);
		Float totsal1 = hra + da;// 1800
		try {
			Connection conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "c##batch111",
					"shivam");
			CallableStatement cs = conn.prepareCall("{call EmpRegister50(?,?,?,?,?,?,?,?,?,?,?,?,?,?)}");
			cs.setLong(1, empId);
			cs.setString(2, empName);
			cs.setString(3, empDesg);
			cs.setString(4, houseNo);
			cs.setString(5, sName);
			cs.setString(6, city);
			cs.setString(7, state);
			cs.setLong(8, pinCode);
			cs.setString(9, mId);
			cs.setLong(10, phNo);
			cs.setLong(11, bsal);
			cs.setFloat(12, hra);
			cs.setFloat(13, da);
			cs.setFloat(14, totsal1);
			cs.execute();
			System.out.println("Customer Registered");

		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
