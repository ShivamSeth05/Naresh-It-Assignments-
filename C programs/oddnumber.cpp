#include<stdio.h>
#include<conio.h>
int main(){
	int i=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Even numbers:");
	while(i<=n){
		if(i%2==0) printf("%4d",i);
		i++;
	}
}
