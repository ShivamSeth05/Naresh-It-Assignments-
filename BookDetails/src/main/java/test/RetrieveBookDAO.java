package test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

public class RetrieveBookDAO {

	public ArrayList<BookBean> a1 = new ArrayList<BookBean>();
	public  ArrayList<BookBean> retrive() {

		try {
			Connection con=DBConnection.getconn();
			PreparedStatement ps = con.prepareStatement("select * from bookdetails50 ");
			ResultSet rs=ps.executeQuery();
			while (rs.next()) {
				BookBean pb= new BookBean(); 
				pb.setCode(rs.getString(1));
				pb.setName(rs.getString(2));
				pb.setAuth(rs.getString(3));
				pb.setPrice(rs.getFloat(4));
				pb.setQty(rs.getInt(5));
				a1.add(pb);//Bean object added to ArrayList
			}//end of loop
		} catch (Exception e) {
			e.printStackTrace();
		}
		return a1;

	}
}
