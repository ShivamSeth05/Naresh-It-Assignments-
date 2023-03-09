<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"
	errorPage="Error.jsp"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%!int fact;

	int factorial(int n) {
		fact = 1;
		for (int i = n; i >= 1; i--) {
			fact = fact * i;
		}
		return fact;
	}%>
	
	<%
	int val=Integer.parseInt(request.getParameter("v"));
	int res = factorial(val);
	out.println("factorial"+res+"<br>");
	%>
	<%@ include file="input.html" %>

</body>
</html>