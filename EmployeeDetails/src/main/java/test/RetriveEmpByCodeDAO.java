package test;

import java.sql.*;
import javax.servlet.*;
public class RetriveEmpByCodeDAO  {

	public EmpBean pb = null;
	public EmpBean retrieve(ServletRequest req) {
		try {
			Connection con = DBConnection.getconn();
			PreparedStatement ps = con.prepareStatement
			("select * from Employee50 where id=?");
			ps.setString(1, req.getParameter("ecode"));
			ResultSet rs = ps.executeQuery();
			if(rs.next()) {
				pb = new EmpBean();
				pb.setCode(rs.getString(1));
				pb.setName(rs.getString(2));
				pb.setDsg(rs.getString(3));
				pb.setBsal(rs.getFloat(4));
				pb.setTsal(rs.getFloat(5));
			}
		}catch(Exception e) {e.printStackTrace();}
		return pb;
	}
}