package test;
import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.GenericServlet;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;
@SuppressWarnings("serial")
@WebServlet("/login")
public class LoginServlet extends GenericServlet{

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {

		PrintWriter pw =res.getWriter();
		res.setContentType("text/html");
		String  id= req.getParameter("uname");
		String  pwd= req.getParameter("pwd");


	
		if(id.equals("Shivam")&&pwd.equals("1234")) {
			
			pw.println("Login Succusful");
			pw.println("<h1>Welcome Page</h1>");
		}else {

			RequestDispatcher rd = req.getRequestDispatcher("input.html");
			rd.include(req, res);
			pw.println("Wrong  password");
		}



	}




}


