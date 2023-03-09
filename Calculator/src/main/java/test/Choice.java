package test;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;
@WebServlet("/ch")
public class Choice implements Servlet {

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		String n1=req.getParameter("s1");
		if(n1.equals("add")){
			RequestDispatcher rd = req.getRequestDispatcher("add");
			rd.include(req, res);
		}
		if(n1.equals("sub")){
			RequestDispatcher rd = req.getRequestDispatcher("sub");
			rd.include(req, res);
		}
		if(n1.equals("mul")){
			RequestDispatcher rd = req.getRequestDispatcher("mul");
			rd.include(req, res);

		}
		if(n1.equals("div")){
			RequestDispatcher rd = req.getRequestDispatcher("div");
			rd.include(req, res);
		}


	}

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


}
