package bookDetails;

import java.sql.ResultSet;

public class DisplayQuery {
	public static void main(String[] args) {
		Conn ob = new Conn();
		try {
			ResultSet rs =ob.stmt.executeQuery("Select * from Bookdetails50");
		    while (rs.next()) {
		    	System.out.println(rs.getNString(1)+" | "+rs.getNString(2)+" | "+rs.getNString(3)+" | "+rs.getNString(4)+" | "+rs.getLong(5)+" ");
		    }
		    ob.con.close();	
		} catch (Exception e) {
			// TODO: handle exception
		}
		
	}

}
