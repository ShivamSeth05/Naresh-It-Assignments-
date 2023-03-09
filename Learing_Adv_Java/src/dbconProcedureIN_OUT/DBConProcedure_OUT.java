package dbconProcedureIN_OUT;

import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Scanner;




public class DBConProcedure_OUT {

	public static void main(String[] args) {
		try {
			Scanner s = new Scanner(System.in);
			System.out.println("Enter the accNo:");
			long accNo = s.nextLong();
			Connection con = DriverManager.getConnection
					("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			CallableStatement cs =con.prepareCall("{call Retrieve50(?,?,?,?,?,?,?,?,?,?,?,?)}");
			cs.setLong(1, accNo);
			cs.registerOutParameter(2, Types.INTEGER);
			cs.registerOutParameter(3, Types.VARCHAR);
			cs.registerOutParameter(4, Types.FLOAT);
			cs.registerOutParameter(5, Types.VARCHAR);
			cs.registerOutParameter(6, Types.VARCHAR);
			cs.registerOutParameter(7, Types.VARCHAR);
			cs.registerOutParameter(8, Types.VARCHAR);
			cs.registerOutParameter(9, Types.VARCHAR);
			cs.registerOutParameter(10, Types.INTEGER);
			cs.registerOutParameter(11, Types.VARCHAR);
			cs.registerOutParameter(12, Types.BIGINT);
			cs.execute();
			System.out.println("Account_Number "+accNo);
			System.out.println("Cust_Id "+cs.getInt(2));
			System.out.println("Cust_Name "+cs.getString(3));
			System.out.println("cust_bal "+cs.getFloat(4));
			System.out.println("Acc_Type "+cs.getString(5));
			System.out.println("House_No "+cs.getString(6));
			System.out.println("Street_name "+cs.getString(7));
			System.out.println("City "+cs.getString(8));
			System.out.println("State "+cs.getString(9));
			System.out.println("PinCode "+cs.getInt(10));
			System.out.println("Mail_id "+cs.getString(11));
			System.out.println("Phone_No "+cs.getLong(12));
			s.close();
			
		} catch (Exception e) {
			e.printStackTrace();
		}


	}


}
