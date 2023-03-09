/*
 * Program:1
A school offers medals to the students of tenth based on the following criteria 
If(Marks>=90) : Gold 
If(Marks between 80 and 90) : Silver 
If(Marks between 70 and 80) : Bronze 
Note: Marks between 80 and 90 means marks>=80 and marks<90 
Write a function which accepts the marks of students as a Hashmap and return 
the details of the students eligible for the medals along with type of medal. 
The input hashmap contains the student registration number as key and mark as value. 
The output hashmap should contain the student registration number as key and the medal type as value.
Method Name 	getStudents 
Argument 	Hashmap 
Return Type 	Hashmap 
 */
package classtest21;

//import java.util.Collection;
import java.util.HashMap;
import java.util.Map.Entry;

class Student {

	public static HashMap<Integer, String> getStudents(HashMap<Integer, Integer> hm) {

		String aString="";
		for (Entry<Integer, Integer> entry : hm.entrySet()) {

			Integer val = entry.getValue();
			if(val>=90) aString= "Gold";
			else if(val>=80) aString= "Silver";
			else if(val>=70)aString= "bronnz";
			else aString="NO Price";
		}

		HashMap<Integer, String> htm1 = null;
		htm1 = new HashMap<>();
		htm1.put(null, aString);
		return htm1;

	}
}

public class Pro1 {

	public static void main(String[] args) {
		HashMap<Integer,Integer> hm = new HashMap<>();
		hm.put(101, 60);
		System.out.println(Student.getStudents(hm).values());


	}

}
