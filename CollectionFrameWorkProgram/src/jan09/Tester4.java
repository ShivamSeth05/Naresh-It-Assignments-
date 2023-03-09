package jan09;

import java.util.LinkedHashSet;
import java.util.Set;

/*
 * Program: 4
Write a java program to copy a set to another.
A SetCopy class is given to you. Add the following implementations in the class:
Implement the method copySets(source, destination):
The source and destination are two Sets of Integers. You have to copy all the elements in the
source to the destination. Return 0 on successful copy
If either the destination Set or source Set is null, return 1.
A class called Tester with the main method is given to you. Use this class to test your solution.
 */
class SetCopy{
	static int copySets(Set<Integer>source,Set<Integer>destination){
		if(destination.addAll(source)) {
			System.out.println(destination.toString());
			return 0;
		}
		return 1;
		
	}
}
public class Tester4 {
	public static void main(String[] args) {
		Set<Integer> s1=new LinkedHashSet<>();//source
		Set<Integer> d1=new LinkedHashSet<>();//dest
		for (int i=14;i<25;i++) {
			s1.add(i);
		}
		System.out.println(s1);

		if(SetCopy.copySets(s1, d1)==0) {
			System.out.println("Copy Successful");
		}else {
			System.out.println(1);
		}
	}
}
