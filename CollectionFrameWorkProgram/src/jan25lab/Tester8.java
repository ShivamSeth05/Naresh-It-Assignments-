package jan25lab;

import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

/*
 * Program: 8
A class RemoveStringsFromList is given to you. Implement the following features in the class.
Implement the method createSubList(): this method should return the ArrayList of strings which
does not start or end with a vowel in each string.
Means remove the words from a given string which starts or ends with vowel then create a list.
Note : Upper case and lower case characters should be treated as same.
If the string is empty return null
Ex:- input:
String str1 = "apple orange banana grapes MANGO";
output: grapes
A class RemoveFromListTester is given to you with a main method. 
 */
//class RemoveStringsFromList{
//	static ArrayList<String> createSubList(ArrayList<String> ob){
//		ArrayList<String>ob1 = new ArrayList<String>();
//		Object o[]=ob.toArray();
//		String st=(String) o[0];
//		System.out.println(st);
//		StringTokenizer sk = new StringTokenizer(st," ");
////		System.out.println();
//		while (sk.hasMoreElements()) {
//			String string=(String) sk.nextElement();
//			if(!((string.startsWith("a")||
//					string.startsWith("e")||
//					string.startsWith("i")||
//					string.startsWith("o")||
//					string.startsWith("u")||
//					string.startsWith("A")||
//					string.startsWith("E")||
//					string.startsWith("I")||
//					string.startsWith("O")||
//					string.startsWith("U")||
//					string.endsWith("a")||
//					string.endsWith("e")||
//					string.endsWith("i")||
//					string.endsWith("A")||
//					string.endsWith("E")||
//					string.endsWith("I")||
//					string.endsWith("o")||
//					string.endsWith("O")||
//					string.endsWith("U")||
//					string.endsWith("u")))) {
//				ob1.add(string);
//			}
//
//		}
//
//		return ob1;
//	}
//}
 class RemoveStringsFromList {
	public static ArrayList<String> createSubList(ArrayList<String> arrayList){
		String vowelsString="aeiouAEIOU";
		ArrayList<String>aLL=new ArrayList<String>();
		if (arrayList.equals(null)) {
			return null;
		}
		for(String s:arrayList){  //for each String in List
			if(!(vowelsString.contains(s.charAt(0)+"")) && (!(vowelsString.contains(s.charAt(s.length()-1)+"")))) //charAt(0) represents the beginning of string
				aLL.add(s);
		}
		return aLL;
	}
}
public class Tester8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<String> al = new ArrayList<String>();
		al.add("ppl orange banana grapes MANGO");
//		System.out.println(RemoveStringsFromList.createSubList(al));
		System.out.println(RemoveStringsFromList.createSubList(al).toString());

	}

}
