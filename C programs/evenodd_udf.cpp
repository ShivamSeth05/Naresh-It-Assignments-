#include<stdio.h>
#include<conio.h>
int evenodd(int a){
	if(a%2!=0)
	return 1;	
}
int maxnum(int a,int b){
	
	return a>b?a:b;
}
int main()
{
	int n,n1,n2;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("%s\n\n",evenodd(n)?"odd":"even");
	printf("Enter the number :");
	scanf("%d%d",&n1,&n2);
	printf("max is %d\n\t",maxnum(n1,n2));
	
}
