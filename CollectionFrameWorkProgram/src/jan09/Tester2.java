package jan09;
//
//Program: 2
//Write a java program to convert a list to an array.
//A class called ListToArray is given to you.
//Add a static method : convertToArray(List<Integer> inputList) : This method takes a list of
//integers as an argument.
//It should convert the given list to an array of ints and return this array.
//Note that the length of the array must be the same as that of the list.
//A Class called Tester with the main method is given to you. Use this class to test your solution

import java.util.ArrayList;
import java.util.List;

class ListToArray{
	 static Object[] convertToArray(List<Integer> ob) {
		 
		 return ob.toArray();
	 }
}
public class Tester2 {

	public static void main(String[] args) {
		List<Integer>lo = new ArrayList<Integer>();
		lo.add(5);
		lo.add(54);
		lo.add(55);
		lo.add(54);
		lo.add(55);
		System.out.println("List");
		System.out.println(lo.toString());
		Object o[]  = ListToArray.convertToArray(lo);
		System.out.println("Conver In Array");
		for (Object object : o) {
			System.out.print(object + " ");
		}
	}

}
