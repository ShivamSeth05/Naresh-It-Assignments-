package jdbcJan04;

import java.sql.*;

public class Conn {

	Connection con;
	Statement stmt ;
	Conn() {

		try {
			con = DriverManager.getConnection
					("jdbc:oracle:thin:@localhost:1521:orcl","C##batch111","shivam");
			stmt = con.createStatement();

		} catch (SQLException e) {

			e.printStackTrace();
		}


	}

}
