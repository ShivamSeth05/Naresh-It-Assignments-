//creating and executing Function:
//step-1 : Construct Function to retrieve balance based on accNo
//create or replace function RetrieveBal50
// (ano number)return number as amt number;
//begin
// select balance into amt from BankCustomer50 where accno=ano;
// return amt;
//end;
///
//step-2 : Construct JDBC Application to execute Function
package jan11dbconn;

import java.sql.*;
import java.util.Scanner;

public class DBCon0 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			Scanner s = new Scanner(System.in);
			 System.out.println("Enter the accNo:");
			 long accNo = s.nextLong();
			 Connection con = DriverManager.getConnection
			 ("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			 CallableStatement cs = con.prepareCall
			 ("{call ?:=RetrieveBal50(?)}");
			 cs.registerOutParameter(1, Types.FLOAT);
			 cs.setLong(2, accNo);
			 cs.execute();
			 System.out.println("AccNo:"+accNo);
			 System.out.println("Balance:"+cs.getFloat(1));
			 s.close();
		}catch(Exception e) {e.printStackTrace();}
	}

}
