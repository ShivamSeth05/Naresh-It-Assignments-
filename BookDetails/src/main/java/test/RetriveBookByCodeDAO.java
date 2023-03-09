package test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.servlet.ServletRequest;

public class RetriveBookByCodeDAO {
	public BookBean pb = null;
	public BookBean retrieve(ServletRequest req) {
		try {
			Connection con = DBConnection.getconn();
			PreparedStatement ps = con.prepareStatement
			("select * from Bookdetails50 where code=?");
			System.out.println(req.getParameter("bcode"));
			ps.setString(1, req.getParameter("bcode"));
			ResultSet rs = ps.executeQuery();
			if(rs.next()) {
				pb = new BookBean();
				pb.setCode(rs.getString(1));
				pb.setCode(rs.getString(2));
				pb.setName(rs.getString(3));
				pb.setPrice(rs.getFloat(4));
				pb.setQty(rs.getInt(5));
			}
		}catch(Exception e) {e.printStackTrace();}
		return pb;
	}
}
