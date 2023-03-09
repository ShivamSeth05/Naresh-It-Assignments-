//Construct and execute function to display totSal of an employee
//based on empId.

package jan11dbconn;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Types;
import java.util.Scanner;

public class DbConn01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			Scanner s = new Scanner(System.in);
			System.out.println("Enter the EM  PID:");
			String empid = s.nextLine();
			Connection con = DriverManager.getConnection
					("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			CallableStatement cs = con.prepareCall
					("{call ?:=RetrieveEmp50(?)}");
			cs.registerOutParameter(1, Types.FLOAT);
			cs.setString(2, empid);
			cs.execute();
			System.out.println("AccNo:"+empid);
			System.out.println("Balance:"+cs.getFloat(1));
			s.close();
		}catch(Exception e) {e.printStackTrace();}
	}
}


