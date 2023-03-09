#include<stdio.h>
int main(){
	int i,j,n=5,s;
	for(i=1;i<=n;i++){
		for(s=1;s<=n-i;s++)printf("  ");
		for(j=1;j<=i;j++)printf(" %3d",i);
		puts("");
	}
	}

