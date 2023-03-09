//input 1 2 3 
//	  4 5 6
//	  Tranport Element
//	  
//	  1  4
//	  2  5 
//	  3  6

#include<stdio.h>
int main()
{
	int ArrEle[10][10],i,j,rn,cn;
	printf("Enter the row and colom:");
	scanf("%d%d",&rn,&cn);
	
	for(i=0;i<rn;i++){
		for(j=0;j<cn;j++){
			scanf("%d",&ArrEle[i][j]);
		}
	}
	
	for(i=0;i<rn;i++){
		for(j=0;j<cn;j++){
			printf("%3d",ArrEle[i][j]);
		}
		puts(" ");
	}//Actual data
	puts("Tranport Element");
	for(i=0;i<cn;i++){
		for(j=0;j<rn;j++){
			printf("%3d",ArrEle[j][i]);
		}
		puts("");
	}
	
}
