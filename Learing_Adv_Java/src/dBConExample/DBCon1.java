package dBConExample;

import java.util.Date;
import java.sql.*;
import java.text.SimpleDateFormat;
import java.util.Scanner;


@SuppressWarnings("serial")
public class DBCon1 extends Exception {
	public DBCon1(String msg) {
		super(msg);
	}
	public static void main(String[] args)  {
		Scanner sc1 = new Scanner(System.in);
		try (sc1) {
			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "c##batch111",
					"shivam");
			PreparedStatement ps1 = con.prepareStatement("select * from BankCustomer50 where accno=?");
			// Compilation
			PreparedStatement ps2 = con.prepareStatement("update BankCustomer50 set balance=balance+? where accno=?");
			// Compilation
			PreparedStatement ps3 = con.prepareStatement("insert into translog values(?,?,?,?)");
			System.out.println("Commit Status : " + con.getAutoCommit());
			con.setAutoCommit(false);
			System.out.println("Commit Status : " + con.getAutoCommit());
			Savepoint sp = con.setSavepoint();
			System.out.println("Enter home accNo:");
			long hAccNo = sc1.nextLong();
			ps1.setLong(1, hAccNo);
			ResultSet rs1 = ps1.executeQuery();// Execution
			if (!(rs1.next())) {
				throw new DBCon1("Invalid hAccNo...");
			}
			float bal = rs1.getFloat(4);
			System.out.println("Enter benefieciery AccNo:");
			long bAccNo = sc1.nextLong();
			ps1.setLong(1, bAccNo);
			ResultSet rs2 = ps1.executeQuery();// Execution

			if (!(rs2.next())) {
				throw new DBCon1("Invalid bAccNo...");
			}

			System.out.println("Enter the amt to be transferred:");
			float amt = sc1.nextFloat();
			if (!(amt <= bal)) {
				throw new DBCon1("Insufficient fund...");
			}

			// statement-1
			ps2.setFloat(1, amt);
			ps2.setLong(2, hAccNo);
			int p = ps2.executeUpdate();// Buffer Updated
			// Statement-2
			ps2.setFloat(1, amt);
			ps2.setLong(2, bAccNo);
			int q = ps2.executeUpdate();// Buffer Update
			if (p == 1 && q == 1) {
				con.commit();// Update Database
				ps3.setLong(1, hAccNo);
				ps3.setLong(2, bAccNo);
				ps3.setFloat(3, amt);

				Date date = new java.util.Date();
				SimpleDateFormat formatter = new SimpleDateFormat("MM/dd/yyyy");  
				formatter = new SimpleDateFormat("dd MMM yyyy");  
				String strDate = formatter.format(date);  

				ps3.setString(4, strDate);
				ps3.executeQuery();
				con.commit();
				System.out.println("Transaction Successfull..");

			}

		} catch (Exception e) {
			e.printStackTrace();
		}
	}


}
