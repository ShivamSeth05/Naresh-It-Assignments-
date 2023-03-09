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
@WebServlet("/code")
public class RetrieveEmpByCode extends GenericServlet {

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		PrintWriter pw =res.getWriter();
		res.setContentType("text/html");

		RequestDispatcher rd = req.getRequestDispatcher("input.html");
		rd.include(req, res);
		EmpBean pb = new  RetriveEmpByCodeDAO().retrieve(req);
		if(pb==null) {
			pw.println("<br>Invlaid Product Code...");
		}else {
			pw.println("<br>"+pb.getCode()+"&nbsp&nbsp"+
					pb.getName()+"&nbsp&nbsp"+pb.getDsg()+
					"&nbsp&nbsp"+pb.getBsal()+
					"&nbsp&nbsp"+pb.getTsal());
		}

	}

}
