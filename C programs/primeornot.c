#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=1,c=0;
	printf("Enter the n:");scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			c++;
		}
		i++;
	}
	puts(c==2?"prime":"NotPrime");
}
