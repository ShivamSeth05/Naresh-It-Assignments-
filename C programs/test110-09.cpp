#include<stdio.h>
int main(){
	int i,j,n=5,c=1;
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
		printf("%3d",c++);
		}
		puts("");
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<i;j++){
		printf("%3d",c++);
		}
		puts("");
	}
}
