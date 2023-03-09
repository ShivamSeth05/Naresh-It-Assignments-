////	1 
////	2 3 
////	4 5 6
////	7 8 9 10
//
////	1 
////	2 3 
////	3 4 5 
////	4 5 6 7
////  5 6 7 8  9
// 
////1 
////3   2 
////6   5  4
////10  9  8  7
//


#include<stdio.h>
#include<conio.h>

int patt3(){//fun decl
	int i,j,k,c;
	for(i=1;i<=5;i++){
		c=c+i;
		k=c;
		for(j=1;j<=i;j++)
		{
			if(i==1)printf("%4d",i);
			else printf("%4d",k--);	
		}
		puts("");
				
	}
	}
//
//
int patt2(){
	int i,j,k;
	for(i=1;i<=5;i++){
		k=i;
				for(j=1;j<=i;j++)
		{
			if(i==1)printf("%4d",i);
			else printf("%4d",k++);
		}
		puts("");
}
	}


int patt1(){
	int i,j,k=1;
	for(i=1;i<=4;i++){
		
		for(j=1;j<=i;j++)
		{
			printf("%4d",k++);
		}puts("");
				
	}
	}
	patt4(){
		int i,j,n=4;
		for(i=1;i<=4;i++){
			for(j=1;j<=4;j++){
				if(n-i>=j){
					printf(" ");
				}
				else printf("*");
//				else printf("* "); another patterns
			}puts("");
		}
	}

void main(){
//	patt1();//function calling
//	puts("===================================");//print
//	patt2();//function calling
//	puts("====================================");
//	patt3();
//	puts("===================================");
	patt4();
	puts("");
	
	
}


		
	

