#include<stdio.h>
int main()
{
	int i,j,a[10][10],r,c,sum=0;
	printf("Enter the no of row and col");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			if(i<j)sum=sum+a[i][j];
		}	
	}
	printf("Sum of upper triangluar ele is %d",sum);
}
