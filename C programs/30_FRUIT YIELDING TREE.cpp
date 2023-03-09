//	Program-30
//	
//	FRUIT YIELDING TREE
//	Fruit yielding tree
//	Raju owned a farm which had ‘n’ fruit trees. He sold a tree from the farm which yielded the utmost number of fruits. 
//	Now, he wanted to seek out the tree that yielded the second maximum number of fruits. 
//	Write a program to assist Raju find the second largest fruit yielding tree without sorting.
//	
//	Function Specification: int secondLargest(int *, int);
//	
//	Input format:
//	
//	The first line of the input corresponds to the n.
//	
//	The next n inputs correspond to the number of fruits yielded by each tree.(Assume number of fruits yielded by each tree is unique)
//	
//	 
//	Output format:
//	
//	The output is an integer which corresponds to the second largest fruit yielding tree from the farm.
//	
//	Sample Input:
//	7
//	7
//	5
//	8
//	6
//	9
//	4
//	3
//	Sample Output:
//	8
#include<stdio.h>
int secondLargest(int arr[], int size){
	int max=0,max1=0,i;
	for(i=0;i<size;i++){
		if(arr[i]>max ) {
			max1=max;
			max=arr[i];	
		}
		else if (arr[i]>max1&& arr[i]<max)
				   max1=arr[i];
	}
	return max1;
}
int main(){
	int arr[100],size,i;
	printf("Enter the Size of the array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",secondLargest(arr,size));
}



















