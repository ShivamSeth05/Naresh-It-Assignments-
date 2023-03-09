#include<stdio.h>
int main(){
	int i,j,k,n=5;
	for(i=1;i<=n;i++){
		for(j=i;j<n;j++)printf(" ");
		for(k=1;k<=i;k++){
			if(k==1||k==i)printf(" *");
			else printf("  ");
		}
		puts("");
	}
	for(i=n;i>=1;i--){
		for(j=i;j<n;j++)printf(" ");
		for(k=1;k<=i;k++){
			if(k==1||k==i)printf(" *");
			else printf("  ");
		}
		puts("");
	}
//		for(i=1;i<=n;i++){
//		for(j=1;j<i;j++)printf(" ");
//		for(k=1;k<=n;k++){
////			printf("%d",k);
//			if(k==1)
//			printf("*");
////			else printf();
//		}
//		puts("");
//	}
}



//          *	 
//		*   *
//	  *      *
	  
