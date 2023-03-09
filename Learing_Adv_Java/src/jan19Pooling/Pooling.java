package jan19Pooling;

import java.sql.*;
import java.util.*;

public class Pooling {

	public String url,uName,pWord;
	public Pooling(String url,String uName,String pWord) {
		this.url=url;
		this.uName=uName;
		this.pWord=pWord;
	}
	public Vector<Connection> v = new Vector<Connection>();
	public void createConnections()
	{
		try {
			while(v.size()<5) {
				System.out.println("Pool is Not full...");
				Connection con =DriverManager.getConnection(url,uName,pWord);
				v.add(con);//Adding Connection to Vector
				System.out.println(con);
			}//end of loop
			if(v.size()==5) {
				System.out.println("Pool is full....");
			}
		}catch(Exception e) {e.printStackTrace();}
	}//end of method
	public synchronized Connection useConnection()
	{
		Connection con = v.firstElement();
		v.removeElementAt(0);
		return con;
	}//end of method
	public synchronized void returnConnection(Connection con) {
		v.addElement(con);//Adding Connection to pool
		System.out.println("Connectoon added back to pool...");
	}

}
