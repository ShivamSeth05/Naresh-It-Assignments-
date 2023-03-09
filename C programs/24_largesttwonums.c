// 24 program
//	Implement a Program to Find the Largest Two Numbers in a given Array 
//	Constraint
//	First it accepts an array, then compares the elements and finds which is the largest two element in a given array. Array must be unsorted.
//	
//	Sample Input
//	Enter size of an array
//	5
//	Enter 5 integer numbers 
//	55
//	85
//	55
//	15
//	25
//	
//	Sample Output
//	Input integers are 
//	   55   85   55   15   25
//	
//	85 is the first largest 
//	55 is the second largest 
//	Average of 85 and 55 = 70 
//	
//	Case1:
//	Enter size of an array
//	5
//	Enter 5 integer numbers 
//	25
//	35
//	45
//	55
//	65
//	Input integers are 
//	 25
//	 35
//	 45
//	 55
//	 65
//	
//	65 is the first largest
//	55 is the second largest
//	Average of 65 and 55 = 60
//	.................................................................

#include<stdio.h>
int main(){
	int arr[100],size,i,max=0,max1=0;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]>max ) {
			max1=max;
			max=arr[i];	
		}
		else if (arr[i]>max1&& arr[i]<max)
				   max1=arr[i];
	}
	printf("%d is the first largest\n",max);
	printf("%d is the Second largest\n",max1);
	printf("Average of %d and %d = %d",max,max1,(max+max1)/2);
}



