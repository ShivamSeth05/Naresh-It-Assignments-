package dBConExample;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;


@SuppressWarnings("serial")
public class Dbcon2_19_jab extends Exception {
	public Dbcon2_19_jab(String msg) {
		super(msg);
	}

	public static void main(String[] args) throws SQLException, Dbcon2_19_jab {
		
			Scanner s = new Scanner(System.in);
			System.out.println("Enter the AccNo:");
			String accNo = s.nextLine();
			Connection con = DriverManager.getConnection
					("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			PreparedStatement ps1 = con.prepareCall("select * from translog where haccno=?");

			ps1.setString(1, accNo);
			ResultSet rSet = ps1.executeQuery();
			int j=0;
			while (rSet.next()) {
				j++;

				System.out.println(rSet.getString(1)+" \t\t "+rSet.getString(2)+" \t\t "+rSet.getInt(3)+" \t\t "+rSet.getDate(4));
			}
			if(j==0) {
				throw new Dbcon2_19_jab("Data_Not_Fonud");
			}

	}

}
