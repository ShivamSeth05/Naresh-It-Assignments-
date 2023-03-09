#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\b=%d",sum);
}
