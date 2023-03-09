#include<stdio.h>
int main(){
	int i,j,a[10][10],r,c,rowsum=0,colosum=0,flag=0,maxcol,maxrow=0;
	printf("Enter the no of row and col");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("Enter the element a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	puts("=======================================================");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%2d",a[i][j]);
			puts("");
		}//just print
			
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		colosum=colosum+a[i][j];}
		if(maxcol<colosum)maxcol=colosum;
		colosum=0;
		}//coloumSum
		printf("\nmaxrowsum=%d",maxcol);
//	
		for(i=0;i<c;i++){
			for(j=0;j<r;j++){
			rowsum=rowsum+a[j][i];
			if(maxrow<rowsum)maxrow=rowsum;
			}
			rowsum=0;
		}//coloumSum
			printf("\nmaxcolsum= %d\n",maxrow);
		puts("==========================>  $  <=============================");
	if(maxcol<maxrow)puts("No row dom");
	else puts("Row dom");
	
}
