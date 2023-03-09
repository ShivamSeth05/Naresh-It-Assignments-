#include<stdio.h>
#include<conio.h>
//123 == 321
int main()
{
	int n ;
	printf("enter the number :");
	scanf("%d",&n);
	do{
		printf("%d",n%10);//3 2 1
		n=n/10;
//		n++;
	}while(n!=0);
}
