#include<stdio.h>
#include<conio.h>
//0  1  1 2 3  5
//n1 n2 s 
int main(){

	int n,n1=0,n2=1,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	while(n-2>0){
		sum=n1+n2;
		printf(" %d",sum);
		n1=n2;
		n2=sum;
		n--;
		
	}
}
