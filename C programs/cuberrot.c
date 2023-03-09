#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,c;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<n/4;i++){
		 c =pow(i,3);
		if(n==c){
			printf("%d cube root is %d ",i,c);
	  break;}
//	  printf("1 ");
		
	}
	if(n!=c)puts("NOT cube");
	
}
