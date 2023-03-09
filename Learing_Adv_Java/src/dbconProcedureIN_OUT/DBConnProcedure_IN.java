package dbconProcedureIN_OUT;

import java.sql.*;

import java.util.Scanner;


public class DBConnProcedure_IN {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try(s;) {
			System.out.println("Enter the accNo:");
			long accNo = Long.parseLong(s.nextLine());
			System.out.println("Enter the CustId:");
			int cId = Integer.parseInt(s.nextLine());
			System.out.println("Enter the CustName:");
			String cName = s.nextLine();
			System.out.println("Enter the Balance:");
			float bal = Float.parseFloat(s.nextLine());
			System.out.println("Enter the accType:");
			String accType = s.nextLine();
			System.out.println("Enter the HNO:");
			String hNo = s.nextLine();
			System.out.println("Enter the StreetName:");
			String sName = s.nextLine();
			System.out.println("Enter the City:");
			String city = s.nextLine();
			System.out.println("Enter the State:");
			String state = s.nextLine();
			System.out.println("Enter the PinCode:");
			int pinCode = Integer.parseInt(s.nextLine());
			System.out.println("Enter the MailId:");
			String mId = s.nextLine();
			System.out.println("Enter the PhoneNo:");
			long phNo = Long.parseLong(s.nextLine());
			
			Connection co = DriverManager.getConnection
					("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			CallableStatement cs = co.prepareCall("{call Register50(?,?,?,?,?,?,?,?,?,?,?,?)");
			cs.setLong(1, accNo);
			cs.setInt(2, cId);
			cs.setString(3, cName);
			cs.setFloat(4, bal);
			cs.setString(5, accType);
			cs.setString(6, hNo);
			cs.setString(7, sName);
			cs.setString(8, city);
			cs.setString(9, state);
			cs.setInt(10, pinCode);
			cs.setString(11, mId);
			cs.setLong(12, phNo);
			cs.execute();
			System.out.println("Customer Registered");
			
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
