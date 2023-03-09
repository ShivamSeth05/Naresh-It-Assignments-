package jan09;

import java.util.*;

/*
 * Program: 3
Write a java program to sort a list of integers.
A class called ListSorter is given to you.
Add a static method : sortIntList(List<Integer> inputList) : This method takes a list of integers as
an argument.
It should sort the given list in ascending order and the sorted list should be returned.
A Class called Tester with the main method is given to you. Use this class to test your solution
 */
class ListSorter{
   static List<Integer> sortIntList(List<Integer>ls){
	   Collections.sort(ls);
	return ls;
   }
}
public class Tester3 {
	public static void main(String[] args) {
		List<Integer> ls1 = new ArrayList<Integer>();
		ls1.add(15);
		ls1.add(11);
		ls1.add(8);
		ls1.add(5);
		ls1.add(55);
		System.out.println(ls1);
		ListSorter.sortIntList(ls1);
		System.out.println(ls1.toString());
	}
}
