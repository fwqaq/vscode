<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<form method="post" action="${pageContext.request.contextPath }/transfer">
		转出账户：<input type="text" name="out"><br>
		转入账户：<input type="text" name="in"><br>
		转账金额：<input tye="text" name="money"><br>
		<input type="submit" value="确认转账"><br>
	</form>
</body>
</html>