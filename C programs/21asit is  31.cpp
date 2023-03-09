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
