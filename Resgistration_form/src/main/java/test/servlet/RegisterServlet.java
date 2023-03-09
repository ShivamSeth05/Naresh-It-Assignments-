package test.servlet;
import java.sql.*;  
import java.io.IOException;
import java.io.PrintWriter;


import java.util.Arrays;
import java.util.List;

import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;
@WebServlet("/register")
public class RegisterServlet implements Servlet {

	@SuppressWarnings("rawtypes")
	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		String name= req.getParameter("name");
		String add= req.getParameter("add");
		String agg= req.getParameter("age");
		String qlfy= req.getParameter("qlfy");
		String pr= req.getParameter("per");
		String ye= req.getParameter("yer");
//		List a1=Arrays.asList(hob);
//		String string=a1.toString();
		PrintWriter pw=res.getWriter();
		res.setContentType("text/html");
		
//		load the JDBC Driver
		
//		try {
//			try {
//				Class.forName("oracle.jdbc.driver.OracleDriver");
//			} catch (ClassNotFoundException e) {
//				// TODO Auto-generated catch block
//				e.printStackTrace();
//			}  
//			  
//			//step2 create  the connection object  
//			Connection con=DriverManager.getConnection(  
//			"jdbc:oracle:thin:@localhost:1521:orcl","c##batch111","shivam");  
//		
//			PreparedStatement ps1=con.prepareStatement("insert into user1 values(?,?,?,?,?)" );
//			ps1.setString(1, name);
////			ps1.setString(2, dob);
////			ps1.setString(3, gender);
//			ps1.setString(4, qlfy);
////			ps1.setString(5, string);
//			int k=ps1.executeUpdate();
//			if(k>0)pw.println("Data Submited");
//		} catch (SQLException e) {
//			e.printStackTrace();
//		} 
 

		
//		Print data
		pw.println("<div class=\"card\" style=\"width:600px ;margin:auto; margin-top:50px\">");
		pw.println("<h2 class =\"bg-dark text-light card-header\">Registration Details</h2>");
		pw.println("<table class = ' table table-hover table-striped'>");
		pw.println("<tr>");
		pw.println("<td>Name</td>");
		pw.println("<td>"+name+"</td>");
		pw.println("</tr>");
		
		pw.println("<tr>");
		pw.println("<td>Address</td>");
		pw.println("<td>"+add+"</td>");
		pw.println("</tr>");
		
		pw.println("<tr>");
		pw.println("<td>Gender</td>");
		pw.println("<td>"+agg+"</td>");
		pw.println("</tr>");
		
		pw.println("<tr>");
		pw.println("<td>Qualification</td>");
		pw.println("<td>"+qlfy+"</td>");
		pw.println("</tr>");
		
		pw.println("<tr>");
		pw.println("<td>Percentage</td>");
		pw.println("<td>"+pr+"</td>");
		pw.println("</tr>");

		pw.println("<tr>");
		pw.println("<td>Year</td>");
		pw.println("<td>"+ye+"</td>");
		pw.println("</tr>");
		
		pw.println("</table>");
		pw.println("</div>");

	}
	
	@Override
	public void destroy() {
		
	}

	@Override
	public ServletConfig getServletConfig() {
		return null;
	}

	@Override
	public String getServletInfo() {
		return null;
	}

	@Override
	public void init(ServletConfig arg0) throws ServletException {
		// TODO Auto-generated method stub
		
	}



}
