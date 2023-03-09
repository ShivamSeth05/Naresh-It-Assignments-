#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	char ch;
	do{
		printf("Enter the number:");
		scanf("%d",&n);
		if(n>0) puts("Postive");
		else if (n<0) puts("Negative");
		else puts("Zero");
		printf("\n\n do you wana continue [Y/N] [ ]\b\b");
		scanf(" %c",&ch);
	}while(ch=='y'|| ch=='Y');
	
}
