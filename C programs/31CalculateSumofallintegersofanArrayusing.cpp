//	Program-31
//	
//	Write a program to Calculate Sum of all integers of an Array using Arguments 
//	Function specification: int arraysum(int *ptr, int num)
//	Note:
//	Refer function specifications for the function details.
//	int arraysum(int*,int); // for c and c++
//	int arraysum(int[],int) // for java.
//	
//	Input format:
//	The first line of the input corresponds to the number.
//	The next number inputs correspond to the sum of all integers
//	Output format:
//	The output is an calculate sum of all elements in a array.
//	Constraint:
//	This Program calculate sum of all integers of an array using arguments. 
//	The program calls a function/method to add the addition and passes the array argument.
//	
//	Sample Input:
//	5
//	200 400 600 800 1000
//	Sample Output:
//	3000
//	
//	Case1:
//	Enter number of elements
//	2
//	Enter 2 numbers: 
//	10
//	20
//	Sum of all array elements = 30
//	
//	Case2:
//	Enter number of elements
//	1
//	Enter 1 numbers: 
//	10
//	Sum of all array elements = 10

#include<stdio.h>
int arraysum(int arr[] , int arr_size){
	int sum=0,i;
	for(i=0;i<arr_size;i++){
		sum = sum+arr[i];
		
	}
	return sum;
}

int main(){
	int arr[100],arr_size,i;
	printf("Enter the Size of the array:");
	scanf("%d",&arr_size);
	for(i=0;i<arr_size;i++){
		scanf("%d",&arr[i]);   
	}
	printf("Sum of all element = %d",arraysum(arr,arr_size));
}






