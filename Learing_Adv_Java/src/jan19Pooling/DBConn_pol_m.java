package jan19Pooling;
import java.sql.*;
import java.util.*;
public class DBConn_pol_m {

	public static void main(String[] args) {
		try {
			Pooling ob = new Pooling
			("jdbc:oracle:thin:@localhost:1521:orcl","C##batch111","shivam");
			ob.createConnections();
			System.out.println("size of pool:"+ob.v.size());
			System.out.println("****USER-1****");
			Connection con = ob.useConnection();
			System.out.println(con);
			System.out.println("size of	pool:"+ob.v.size());
			System.out.println("****USER-2****");
			Connection con2 = ob.useConnection();
			System.out.println(con2);
			System.out.println("size of	pool:"+ob.v.size());
			System.out.println("****USER-1****");
			ob.returnConnection(con);
			System.out.println("size of	pool:"+ob.v.size());
			System.out.println("****USER-2****");
			ob.returnConnection(con2);
			System.out.println("size of	pool:"+ob.v.size());
			System.out.println("====Display Connection from	Pool===");
			Iterator<Connection>it = ob.v.iterator();
			while(it.hasNext()) {
				System.out.println(it.next());
			}//end of loop
		}catch(Exception e){e.printStackTrace();}

	}

}
