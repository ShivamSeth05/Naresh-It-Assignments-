package DBCon11;

import java.sql.*;

public class DBCon11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");
			Statement stm = con.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY); 
			ResultSet rs1 = stm.executeQuery("select * from Product50");
			System.out.println("===Display reverse==="); 
			rs1.afterLast();
			while(rs1.previous()) {
				System.out.println(rs1.getString("code")+"\t"+rs1.getString("name")+"\t"+rs1.getFloat("price")+"\t"+ rs1.getInt("qty"));
			}//end of loop
			PreparedStatement ps = con.prepareStatement ("select * from Product50",1004,1007); 
			ResultSet rs2 = ps.executeQuery();
			System.out.println("====absolute(3)====="); 
//			rs2.absolute(2);
			System.out.println(rs2.getString("code")+"\t"+rs2.getString("name")+"\t"+rs2.getFloat("price")+"\t"+ rs2.getInt("qty"));
//			System.out.println("===relative(+1)==="); rs2.relative(-2);
//			System.out.println(rs2.getString("code")+"\t"+rs2.getString("name")+"\t"+rs2.getFloat("price")+"\t"+ rs2.getInt("qty"));
		}catch(Exception e) {e.printStackTrace();}}
}