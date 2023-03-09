<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1" import="test.LoginDAO"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
	String fName = new LoginDAO().login(request);
	if(fName==null){
		%>
	out.println("Invalid login process");
	<%
		}else{
		%>
	<jsp:forward page="WelcomeJSP.jsp">
		<jsp:param value="<%=fName %>" name="fname" />
		</jsp:forward>
		<%
	}
		%>
	%>
</body>
</html>