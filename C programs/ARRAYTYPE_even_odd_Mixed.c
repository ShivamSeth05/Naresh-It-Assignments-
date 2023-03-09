//	Program-29
//	
//	FUNCTIONS - ARRAY TYPE
//	Functions – Array Type
//	
//	Write a program to find the type(Even or Odd or Mixed) of the array using functions in c and c++ and methods in java.
//	
//	In an array all the elements are even so, the array type is treated as 'Even'.
//	In an array all the elements are odd so, the array type is treated as 'Odd'.
//	In an array Some elements are Even and Some elements are odd so, the array type is treated as 'Mixed'.
//	 
//	Note:
//	Refer function specifications for the function details.
//	
//	int findType(int n, int *); // only for C and C++
//	int findType(int n, int[]); // java
//	The first argument corresponds to the number of elements in the array.
//	
//	The second argument corresponds to the pointer to an array in C and C++ but in java the second argument corresponds to array.
//	
//	The return value of the function (or) method should be 1 if the array is Even.
//	
//	The return value of the function (or) method should be 2 if the array is Odd.
//	
//	The return value of the function (or) method should be 3 if the array is Mixed.
//	
//	 
//	
//	Input Format:
//	
//	Input consists of n+1 integers where n corresponds to the number of elements in the array.
//	
//	The first integer corresponds to n and the next n integers correspond to the elements in the array.
//	
//	Assume that the maximum number of elements in the array is 20.
//	
//	
//	Output Format:
//	Refer sample input and output for formatting specifications.
//	
//	[All text in bold corresponds to input and the rest corresponds to output.]
//	
//	Sample Input and Output 1 :
//	
//	Enter the number of elements in the array
//	
//	5
//	
//	Enter the elements in the array
//	
//	2	4	1	3	5
//	
//	The array is Mixed
//	
//	Sample Input and Output 2 :
//	
//	Enter the number of elements in the array
//	
//	5
//	
//	Enter the elements in the array
//	
//	9	7	1	3	5
//	
//	The array is Odd
//	
//	 
//	
//	Sample Input and Output 3 :
//	
//	Enter the number of elements in the array
//	
//	5
//	
//	Enter the elements in the array
//	
//	2	4	6	44	50
//	
//	The array is Even
//	
//	Case1:
//	Enter the number of elements in the array
//	5
//	Enter the elements in the array
//	1	2	3	4	5
//	The array is Mixed
//	
//	Case2:
//	Enter the number of elements in the array
//	5
//	Enter the elements in the array
//	1	7	9	5	3
//	The array is Odd
#include<stdio.h>
int findType(int arr[], int size){
	int i,ev=0,od=0,mix=0;
	for(i=0;i<size;i++){
		if(arr[i]%2==0)ev=1;		
		else if(arr[i]%2!=0)od=1; 	
		
	}
	if(ev&&od) return 3;
	else if (ev==1) return 1;
	else return 2;
}

int main(){
	int arr[100],i,size,rs;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	rs=findType(arr,size);
	printf("%s",rs==1?"The array is Even":rs==2?"The array is Odd":"The array is Mixed");
	
}





















