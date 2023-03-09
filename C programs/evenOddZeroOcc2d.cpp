#include<stdio.h>
int main(){
	int a[10][10],i,j,ev,odd,zero;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
		puts("");
	}
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		}
		puts("");
	}//print arr
	
	puts("\tEven  |  Odd  | Zero");
	for(i=0;i<2;i++){
		ev=0;odd=0;zero=0;
		printf("%d-Rows",i+1);
	for(j=0;j<3;j++){
		if(a[i][j]==0)zero++;
		else if(a[i][j]%2==0)ev++;
		else odd++;
//		printf("%3d",a[i][j]);
		}
			printf("\t%d\t %d\t %d\t \n",ev,odd,zero);
	}//count even odd zerp

}
