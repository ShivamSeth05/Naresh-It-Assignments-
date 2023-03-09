package test;

import java.sql.*;
import java.sql.PreparedStatement;
import java.util.ArrayList;

public class RetrieveEmpDAO {
	public ArrayList<EmpBean> al = new ArrayList<EmpBean>();//Created with size=0
	public  ArrayList<EmpBean> retrieve() {
		
		try {
			Connection con=DBConnection.getconn();
			PreparedStatement ps = con.prepareStatement("select * from Employee50");
			ResultSet rs=ps.executeQuery();
			while (rs.next()) {
				EmpBean pb= new EmpBean(); 
				pb.setCode(rs.getString(1));
				pb.setName(rs.getString(2));
				pb.setDsg(rs.getString(3));
				pb.setBsal(rs.getFloat(4));
				pb.setTsal(rs.getFloat(5));
				al.add(pb);//Bean object added to ArrayList
			}//end of loop
			
		}catch(Exception e){
			e.printStackTrace();
		}
		return al;
	}
//	private in
	
}
