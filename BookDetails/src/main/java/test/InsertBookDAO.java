package test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class InsertBookDAO {
	public int k=0;
	public int insert(BookBean pb) {

		try {
			Connection con =DBConnection.getconn(); //Accessing DB Connection
			PreparedStatement ps=con.prepareStatement("insert into bookdetails50 values(?,?,?,?,?)");
			ps.setString(1, pb.getCode());
			ps.setString(2, pb.getName());
			ps.setString(3, pb.getAuth());
			ps.setLong(4, (long) pb.getPrice());
			ps.setLong(5, pb.getQty());
			k = ps.executeUpdate();
			
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return k;
	}
}
