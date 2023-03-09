package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.*;
import javax.servlet.annotation.*;
@SuppressWarnings("serial")
@WebServlet("/add")
public  class AddEmpServlet extends GenericServlet{
	public void service(ServletRequest rq ,ServletResponse rs)throws ServletException,IOException {
		PrintWriter pw=rs.getWriter();
		rs.setContentType("text/html");
		EmpBean pb = new EmpBean();//BeanClassObj
		pb.setCode(rq.getParameter("ecode"));
		pb.setName(rq.getParameter("ename"));
		pb.setDsg(rq.getParameter("edsg"));
		pb.setBsal(Float.parseFloat(rq.getParameter("bsal")));
		int k=new InsertEmpDAO().insert(pb);
		RequestDispatcher rd = rq.getRequestDispatcher("input.html");
		rd.include(rq, rs);
		if(k>0) {
			pw.println("Product Added Successfully...<br>");
		}
		pw.close();
	}

}
