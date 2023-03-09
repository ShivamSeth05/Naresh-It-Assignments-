package test;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Iterator;

import javax.servlet.GenericServlet;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;

@SuppressWarnings("serial")
@WebServlet("/view")
public class ViewBookServlet extends GenericServlet{

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		PrintWriter pw =res.getWriter();
		res.setContentType("text/html");
		ArrayList<BookBean>al = new RetrieveBookDAO().retrive();

		RequestDispatcher rd = req.getRequestDispatcher("input.html");
		rd.include(req, res);

		if(al.size()==0) {
			pw.println("<br>Products not available...<br>");
		}
		Iterator<BookBean> at=al.iterator();
		while (at.hasNext()) {
			BookBean pb = (BookBean) at.next();
			pw.println("<br>"+pb.getCode()+
					"&nbsp&nbsp"+pb.getName()+"&nbsp&nbsp"+
					"&nbsp&nbsp"+pb.getAuth()+"&nbsp&nbsp" +pb.getPrice()+"&nbsp&nbsp"+pb.getQty());

		}

	}

}
