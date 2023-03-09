package jan20batch;
import java.util.*;
import java.sql.*;
public class DBCon9 {
	public static void main(String[] args) {
		try {
			Scanner s = new Scanner(System.in);
			Connection con = DriverManager.getConnection
					("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			Statement stm = con.createStatement();
			System.out.println("====CustomerDetails====");
			System.out.println("Enter the accNo:");
			long accNo = Long.parseLong(s.nextLine());
			System.out.println("Enter the CustId:");
			long cId = Long.parseLong(s.nextLine());
			System.out.println("Enter the CustName:");
			String name = s.nextLine();
			System.out.println("Enter the Balance:");
			float bal = Float.parseFloat(s.nextLine());
			System.out.println("Enter the accType:");
			String accType = s.nextLine();
			System.out.println("====BookDetails=====");
			System.out.println("Enter the BookCode:");
			String bCode = s.nextLine();
			System.out.println("Enter the newPrice:");
			float price = Float.parseFloat(s.nextLine());
			stm.addBatch
			("insert into BankCustomer50 values("+accNo+","+cId+",'"+name+"',"+bal+",'"+accType+"')");
			stm.addBatch
			("update BookDetails50 set price="+price+" where code='"+bCode+"'");
			int k[] = stm.executeBatch();
			for(int i=0;i<k.length;i++) {
				System.out.println("Executed Successfully...");
			}
			stm.clearBatch();
			con.close();
			s.close();
		}catch(Exception e) {e.printStackTrace();}
	}
}


