package test28;

import java.util.Arrays;
import java.util.Scanner;

//SET-A
//Program: 1 10Marks
//ARRAY MEDIAN
//Write a Java program to calculate the median of the array's elements.
//Median is the middle value in a sorted array so to find the median value of a series of integers, sort them in increasing order.
//If there is even number of elements in the array, median is the mean of the 2 middle values.
//If there are odd number of elements in the array, median is the middle number. 
//Sample Input and Output :
//Enter the number of elements in the array:  5
//Enter the elements in the array
//2 4 1 3 5 
//The median of the array is 3.00


public class Pro1 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Size of arr");
		int sum=0;
		int n = scanner.nextInt();
		Integer  arr[]= new Integer[n];
		for (int i = 0; i < arr.length; i++) {
			arr[i]=scanner.nextInt();
			sum=sum+arr[i];

		}
		System.out.println("median is "+(float)sum/arr.length);

	}

}
