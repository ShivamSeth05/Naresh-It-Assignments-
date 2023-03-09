package test;

import java.sql.*;

public class InsertEmpDAO {
	public int k=0;
	public int insert(EmpBean pb) {

		try {
			Connection con =DBConnection.getconn(); //Accessing DB Connection
			PreparedStatement ps=con.prepareStatement("insert into Employee50 values(?,?,?,?,?)");
			ps.setString(1, pb.getCode());
			ps.setString(2, pb.getName());
			ps.setString(3, pb.getDsg());
			ps.setLong(4, (long) pb.getBsal());
			float tots= (long)pb.getBsal();
			tots=(float) ((pb.getBsal()*0.2)+(pb.getBsal()*0.1));
			ps.setLong(5, (long) tots);
			k = ps.executeUpdate();
			
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return k;
	}
}
