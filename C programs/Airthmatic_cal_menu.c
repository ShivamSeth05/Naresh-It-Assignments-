#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

	float n1,n2;
	char ch,opr;
	start:
	system("cls");
	puts("Enter the first number and Second number :");
	scanf("%f%f",&n1,&n2);
	puts("|__________________________________________________|\n");
	puts("|==================> M E N U <=====================|");
	puts("|--------------------> +.ADD <---------------------|");
	puts("|--------------------> -.SUB <---------------------|");
	puts("|--------------------> *.MUL <---------------------|");
	puts("|--------------------> /.DIV <---------------------|");
	puts("|--------------------> %.MOD <---------------------|");
	puts("|--------------------> E.EXIT <--------------------|");
	puts("|__________________________________________________|\n");
	printf("Select Opration [+ , - , * , / , %]   ");
	scanf(" %c",&opr);
	switch(opr){
		case '+':
			printf("\t\t\t\t\tSUM IS : %.2f",n1+n2);break;
		case '-':
			printf("\t\t\t\t\tSUB IS : %.2f",n1-n2);break;
		case '*':
			printf("\t\t\t\t\tMUL IS : %.2f",n1*n2);break;
		case '/':
			printf("\t\t\t\t\tDIV IS : %.2f",n1/n2);break;
		case '%':
			printf("\t\t\t\t\tMOD IS : %.2f",fmod(n1,n2));break;
	}
	puts("\n\nDo you want exit [Y/N]");
	scanf(" %c",&ch);
	if(ch=='Y'||ch=='y'){
		puts("\t\t\tThankyou Sir");
		return 0;	
	}	
	else
	goto start;
	
}
