package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.*;
import javax.servlet.annotation.*;
@SuppressWarnings("serial")
@WebServlet("/add")
public  class AddBookServlet extends GenericServlet{
	public void service(ServletRequest rq ,ServletResponse rs)throws ServletException,IOException {
		PrintWriter pw=rs.getWriter();
		rs.setContentType("text/html");
		BookBean pb = new BookBean();//BeanClassObj
		System.out.println(rq.getParameter("bcode"));
		pb.setCode(rq.getParameter("bcode"));
		pb.setName(rq.getParameter("bname"));
		pb.setAuth(rq.getParameter("bauth"));
		pb.setPrice(Float.parseFloat(rq.getParameter("brate")));
		pb.setQty(Integer.parseInt(rq.getParameter("bqty")));		
		int k=new InsertBookDAO().insert(pb);
		RequestDispatcher rd = rq.getRequestDispatcher("input.html");
		rd.include(rq, rs);
		if(k>0) {
			pw.println("Book Added Successfully...<br>");
		}
		pw.close();
	}

}
