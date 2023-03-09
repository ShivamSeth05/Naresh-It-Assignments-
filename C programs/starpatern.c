#include<stdio.h>
#include<conio.h>
///j<=n;
//j>=i  1 2 3 4 5 6 7 
//	i=1	* * * * * * *
//	  2	* * * * * *
//	  3	* * * * *
//	  4	* * * *
//		* * *
//		* *
//		*

int main(){
	int i,j,n=7;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>=i)
			printf("* ");
		}
		puts(" ");
	}
	
}





















// 	*
//	**
//	***
//	**
//	*
//	

//int main(){
//	int i,j,n=5,k;
//	
//	for(i=1;i<=n-1;i++){
//		for(j=1;j<=i;j++){
//				printf("*");
//		}
//		puts("");
//	}
//	for(i=n;i>=1;i--){
//		for(j=1;j<=i;j++){
//				printf("*");
//		}
//		puts("");
//	}
//}
