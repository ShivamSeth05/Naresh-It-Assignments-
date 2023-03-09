package test;
import java.io.*;

import javax.servlet.*;
import javax.servlet.annotation.*;

@WebServlet("/first")
public class FirstServlet implements Servlet  {
	@Override
	public void init(ServletConfig arg0) throws ServletException {
		// TODO Auto-generated method stub
		
	}
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		String uName = req.getParameter("uname");
		String mId = req.getParameter("mid");
		String mName = req.getParameter("name");
		String mPhn = req.getParameter("phn");
		int mPwd = Integer.parseInt(req.getParameter("pwd"));
		
		PrintWriter  pw = res.getWriter();
		res.setContentType("text/html");
		pw.write("<br>username :"+uName);
		pw.write("<br>mailId :"+mId);
		pw.write("<br>name :"+mName);
		pw.write("<br>Phone Number :"+mPhn);
		pw.write("<br>Password :"+mPwd);
		

	}
	public void destroy() {

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
}
