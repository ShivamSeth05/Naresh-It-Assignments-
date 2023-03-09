package test;
import java.sql.*;
import java.sql.PreparedStatement;
import java.util.ArrayList;
public class RetrieveProductsDAO {
	public ArrayList<ProductBean> al = new ArrayList<ProductBean>();//Created with size=0
	public  ArrayList<ProductBean> retrieve() {
		try {
			Connection con=DBConnection.getconn();
			PreparedStatement ps = con.prepareStatement("Select * from Product50");
			ResultSet rs=ps.executeQuery();
			while (rs.next()) {
				ProductBean pb= new ProductBean(); 
				pb.setCode(rs.getString(1));
				pb.setName(rs.getString(2));
				pb.setPrice(rs.getFloat(3));
				pb.setQty(rs.getInt(4));
				al.add(pb);//Bean object added to ArrayList
			}//end of loop
		}catch(Exception e){
			e.printStackTrace();
		}
		return al;
	}
}