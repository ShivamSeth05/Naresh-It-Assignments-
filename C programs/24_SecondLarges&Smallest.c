//	Program-24
//	
//	Implement a Program to Find the Second Largest & Smallest Elements in an Array 
//	Constraints:
//	
//	Sorts the array in an descending order. 
//	Then it finds the second largest and smallest element in an array and also find the average of an array element. 
//	Later it checks if the resultant average number is present in a given array. If found, display appropriate message.
//	Array size must be grater then 2.
//	
//	Sample Input
//	Enter the value of N
//	5
//	Enter the numbers 
//	25
//	36
//	32
//	35
//	55
//	
//	Sample Output
//	The numbers arranged in descending order are given below
//	55
//	36
//	35
//	32
//	25
//	
//	The 2nd largest number is 36
//	
//	The 2nd smallest number is 32
//	
//	The average of 36 and 32 is 34 is not in the array
//	
//	Case1:
//	Enter the value of N
//	5
//	Enter the numbers
//	1
//	2
//	3
//	4
//	5
//	The numbers arranged in descending order are given below 
//	5
//	4
//	3
//	2
//	1
//	The 2nd largest number is 4
//	The 2nd smallest number is 2
//	The average of 4 and 2 in array is 1 
//	
//	Case2:
//	Enter the value of N
//	3
//	Enter the numbers
//	5
//	6
//	8
//	The numbers arranged in descending order are given below 
//	8
//	6
//	5
//	The 2nd largest number is 6
//	The 2nd smallest number is 6
//	The average of 6 and 6 in array is 1 
#include<stdio.h>
int main(){
	int arr[100],i,size,j,temp=0,max=0,min=0,smax=0,smin=0,avg=0;
	printf("Enter the size");
	scanf("%d",&size);
	if(size<2){
		printf("\nArray size must be grater then 2 !!");
		return;
	}
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
		if(arr[i]<arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}		
			max=arr[0];
			min=arr[size-1];
		for(i=0;i<size;i++){
			if(arr[i]<max){
				smax=arr[i];	
			break;
			}
		}
		for(i=size-1;i>0;i--){
			if(arr[i]!=min){
			smin=arr[i];
			break;		
			}
		}
		
		printf("The 2nd largest number is %d\n",max);
		printf("The 2nd smallest number is %d\n",min);
		avg=(float)(smax+smin)/2;
		for(i=0;i<size;i++)
		if(arr[i]==avg)
		avg=1;
		printf("The average of %d and %d in array is  ",smax,smin);
		if(avg==1){
			printf("in array is %d",avg);
		}
		else printf("is not in the array");
}



















