package test04;

import java.util.Arrays;
import java.util.Scanner;

/*
 * Program: 1 10Marks
ARRAY RANGE
Write a program to Calculate the range of the elements in the array.
Range of an array is the distinction between the maximum integer element and minimum integer
element in an array.
Note:
Refer to the keyword constraints
Range of array = Maximum element - minimum element
Sample Input and Output:
Enter the number of elements in the array : 5
Enter the elements in the array
2 4 1 3 5
The range of the array is 4
 */
public class ArrayRange {

	    public static void main(String[] args) {
	        int rows = 5;
	        int k = 0;
	        
	        for (int i = 1; i <= rows; i++, k = 0) {
	            for (int space = 1; space <= rows - i; space++) {
	                System.out.print("  ");
	            }
	            
	            while (k != 2 * i - 1) {
	                System.out.print("* ");
	                k++;
	            }
	            
	            System.out.println();
	        }
	    }
	}



