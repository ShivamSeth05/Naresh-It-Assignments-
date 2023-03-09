package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.*;
import javax.servlet.annotation.*;
@SuppressWarnings("serial")
@WebServlet("/add")
public  class AddProductServlet extends GenericServlet{
	public void service(ServletRequest rq ,ServletResponse rs)throws ServletException,IOException {
		PrintWriter pw=rs.getWriter();
		rs.setContentType("text/html");
		ProductBean pb = new ProductBean();//BeanClassObj
		pb.setCode(rq.getParameter("pcode"));
		pb.setName(rq.getParameter("pname"));
		pb.setPrice(Float.parseFloat(rq.getParameter("prate")));
		pb.setQty(Integer.parseInt(rq.getParameter("pqty")));		
		int k=new InsertProductDAO().insert(pb);
		RequestDispatcher rd = rq.getRequestDispatcher("link.html");
		rd.include(rq, rs);
		if(k>0) {
			pw.println("Product Added Successfully...<br>");
		}
		pw.close();
	}

}
