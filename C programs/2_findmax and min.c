#include<stdio.h>
int main(){
	int n,i,max=-32768,min=32767;
	printf("Enter the Array Size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d Element:\n");
	for(i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
		if(max<arr[i])max=arr[i];
		if(min>arr[i])min=arr[i];
	}
	printf("maximum=%d,minimum=%d",max,min);
}
