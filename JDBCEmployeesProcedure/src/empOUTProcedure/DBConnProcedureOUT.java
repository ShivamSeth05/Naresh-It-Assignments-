package empOUTProcedure;

import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Scanner;

public class DBConnProcedureOUT {

	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the Empid:");
		long empId = s.nextLong();
		try {
			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "c##batch111",
					"shivam");
			CallableStatement cs = con.prepareCall("{call EmpRetrieve50(?,?,?,?,?,?,?,?,?,?,?,?,?,?)}");
			cs.setLong(1, empId);
			cs.registerOutParameter(2, Types.VARCHAR);
			cs.registerOutParameter(3, Types.VARCHAR);
			cs.registerOutParameter(4, Types.VARCHAR);
			cs.registerOutParameter(5, Types.VARCHAR);
			cs.registerOutParameter(6, Types.VARCHAR);
			cs.registerOutParameter(7, Types.VARCHAR);
			cs.registerOutParameter(8, Types.BIGINT);
			cs.registerOutParameter(9, Types.VARCHAR);
			cs.registerOutParameter(10, Types.BIGINT);
			cs.registerOutParameter(11, Types.BIGINT);
			cs.registerOutParameter(12, Types.FLOAT);
			cs.registerOutParameter(13, Types.FLOAT);
			cs.registerOutParameter(14, Types.FLOAT);
			// cs.registerOutParameter(5, Types.VARCHAR);

			cs.execute();

			System.out.println("EmP ID: " + empId);
			System.out.println("EmP Name: " + cs.getString(2));
			System.out.println("EmP Desg: " + cs.getString(3));
			System.out.println("EmP House_No: " + cs.getString(4));
			System.out.println("EmP Street_Name: " + cs.getString(5));
			System.out.println("EmP City: " + cs.getString(6));
			System.out.println("EmP State: " + cs.getString(7));
			System.out.println("EmP Pincode: " + cs.getLong(8));
			System.out.println("EmP MailId: " + cs.getString(9));
			System.out.println("EmP PhoneNo: " + cs.getLong(10));
			System.out.println("EmP Basic Sal: " + cs.getLong(11));
			System.out.println("EmP HRA: " + cs.getLong(12));
			System.out.println("EmP DA: " + cs.getLong(13));
			System.out.println("Totalsal : " + cs.getLong(14));

		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
