//	
//	Program-27
//	
//	MAXIMUM DIFFERENCE
//	Given an array of integers, find out the maximum difference among any two integers such that larger integer appears after the smaller ineteger in an array.
//	Examples:
//	If array is [1,5,56,89,25,41,33,55] then returned value should be 88 (Diff between 89 and 1).
//	If array is [10,30,50,70,110,90] then returned value should be 100 (Diff between 10 and 110)
//	
//	Input and Output Format:
//	The first line of the input consists of an integer, n that corresponds to the number of elements in the input array.
//	The next 'n' lines in the input correspond to the elements in the array.
//	Output is an integer.
//	
//	Sample Input1:
//	5
//	1
//	2
//	90
//	10
//	110
//	Sample Output1:
//	109
//	
//	1.
//	Enter number of elements
//	7
//	Enter 7 elements
//	2
//	3
//	10
//	6
//	4
//	8
//	1
//	Difference between maximum and minimum value is 8
//	
//	2.
//	Enter number of elements
//	6
//	Enter 6 elements
//	10
//	20
//	30
//	40
//	50
//	6
//	Difference between maximum and minimum value is 40
//	
//	3.
//	Enter number of elements
//	5
//	Enter 5 elements
//	10
//	20
//	30
//	40
//	50
//	Difference between maximum and minimum value is 40
#include<stdio.h>
int main(){
	int arr[100],i,size,j,temp=0;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
		if(arr[i]==arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}
	printf("%d",arr[size-1]-arr[0]);
}
















