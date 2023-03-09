//	
//	Program-28
//	
//	Implement a Program to Find the Sum of Contiguous Subarray within a 1 – D Array of Numbers which has the Largest Sum 
//	Sample Input
//	Enter array size
//	8
//	Enter 8 elements
//	10	-2	15	9	-8	12	20	-5  
//   

//	Sample Output
//	The max sum is 56 
//	The begin and End are 0 & 6

//	Case1:
//	Enter array size
//	5
//	Enter 5 elements
//	10	20	30	40	50
//	The maximum sum is 150
//	The begin and End are 0 & 4
//	
//	Case2:
//	Enter array size
//	5
//	Enter 5 elements
//	1	2	3	4	5
//	The maximum sum is 15
//	The begin and End are 0 & 4

// 5 -4 -2 6 -1
#include<stdio.h>
int main(){
	int arr[100],i,size,maxsum=0,currsum=0,begin=0,end=0,b=0;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		currsum=currsum+arr[i];
		if(currsum>maxsum){
			maxsum=currsum;
			begin=b;
			end=i;
		}
	
		if(currsum<0){
			currsum=0;
			b=i+1;
			
		}
	}
	
	printf("The maximum sum is %d",maxsum);
	printf("\nThe begin and End are %d & %d",begin,end);
}










