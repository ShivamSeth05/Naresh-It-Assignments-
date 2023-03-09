package test;

import java.sql.*;
import javax.servlet.*;
public class RetriveProductByCodeDAO  {

	public ProductBean pb = null;
	public ProductBean retrieve(ServletRequest req) {
		try {
			Connection con = DBConnection.getconn();
			PreparedStatement ps = con.prepareStatement
			("select * from Product50 where code=?");
			ps.setString(1, req.getParameter("pcode"));
		System.out.println(req.getParameter("pcode"));
			ResultSet rs = ps.executeQuery();
			if(rs.next()) {
				pb = new ProductBean();
				pb.setCode(rs.getString(1));
				pb.setName(rs.getString(2));
				pb.setPrice(rs.getFloat(3));
				pb.setQty(rs.getInt(4));
			}
		}catch(Exception e) {e.printStackTrace();}
		return pb;
	}
}