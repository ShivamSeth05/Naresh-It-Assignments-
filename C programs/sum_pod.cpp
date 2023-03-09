#include<stdio.h>
#include<conio.h>
// 3 * 2 * 1 =6
int main(){
	int n,pod=1,d;
	printf("Enter the n");
	scanf("%d",&n);
	while(n>1){
		d=n%10;
		pod=pod*d;
		n=n/10;
		
	}
	printf("pod=%d",pod);
} 
