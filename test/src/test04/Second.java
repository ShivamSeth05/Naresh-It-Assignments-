package test04;
/*
 * A company transmits its String data over the network as encrypted data. The encryption logic is
as shown given below.
For a String ad the logic is as given
aa+9=j
dd+9=m
So the encrypted word would be jm.
Method Name :encryptString , Argument : String Return type : String 
 */
class A{
	public static String encryptString(String a) {
		int n;
		String S="";
		for (int i = 0; i < a.length(); i++) {
			n=a.charAt(i)+9;
			System.out.printf("%c",n);			
		}
		return "";
		
	}
}

public class Second {

	public static void main(String[] args) {
		System.out.println(A.encryptString("bc"));

	}

}
