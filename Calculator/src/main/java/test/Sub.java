package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;

@WebServlet("/sub")
public class Sub implements Servlet {

	@Override
	public void destroy() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public ServletConfig getServletConfig() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getServletInfo() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void init(ServletConfig arg0) throws ServletException {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		PrintWriter pw=null;
		try {
			int a= Integer.parseInt(req.getParameter("number1"));
			int b= Integer.parseInt(req.getParameter("number2"));
			int s=a-b;
			res.setContentType("text/html");
			pw=res.getWriter();
			 //add bootstrap
			 pw.println("<!-- Latest compiled and minified CSS -->\r\n"
			 		+ "<link\r\n"
			 		+ "	href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/css/bootstrap.min.css\"\r\n"
			 		+ "	rel=\"stylesheet\">\r\n"
			 		+ "\r\n"
			 		+ "<!-- Latest compiled JavaScript -->\r\n"
			 		+ "<script\r\n"
			 		+ "	src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js\"></script>");
			 
			 	pw.println("<div class=\"card\" style=\"width:600px ;margin:auto; margin-top:50px\">");
				pw.println("<h2 class =\"bg-dark text-light card-header\">Result</h2>");
				pw.println("<table class = ' table table-hover table-striped'>");
				pw.println("<tr>");
				pw.println("<td>Subtraction of Two Number is</td>");
				pw.println("<td>"+s+"</td>");
				pw.println("</tr>");
				pw.println("</table>");
				pw.println("</div>");
		
			
		} catch (Exception e) {
			pw.println(e.getMessage());
		}
		
	}

}
