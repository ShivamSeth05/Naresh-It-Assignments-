#include<stdio.h>
#include<conio.h>
int main(){
	int n,even=0,odd=0;
	printf("Enter the number ");
	scanf("%d",&n);
	
	while(n>0){
		if(n%2){
			odd=odd+n;
			n--;
		}
		else{
		even=even+n;
			n--;
		}
	}
		printf("even is %d \nodd is %d ",even,odd);
	
	 
}
