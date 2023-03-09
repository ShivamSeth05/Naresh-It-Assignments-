package test;

import java.sql.*;

public class InsertProductDAO {
	public int k=0;
	public int insert(ProductBean pb) {

		try {
			Connection con =DBConnection.getconn(); //Accessing DB Connection
			PreparedStatement ps=con.prepareStatement("insert into Product50 values(?,?,?,?)");
			ps.setString(1, pb.getCode());
			ps.setString(2, pb.getName());
			ps.setLong(3, (long) pb.getPrice());
			ps.setLong(4, pb.getQty());
			k = ps.executeUpdate();
			
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return k;
	}
}
