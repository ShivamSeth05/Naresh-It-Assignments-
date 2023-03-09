//  1 
//  3 2
//  4 5 6
//  10 9 8 7 


#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k=1,n=1;
	for(i=1;i<=8;i++){
		for(j=1;j<=i;j++){ 
			if(i%2==1){
				printf("%4d",n);n++;
			}
			else{
				printf("%4d",n);n--;
			}
		}
		n=n+k;
		if(i%2==1){
			k=k+2;
		}
		puts("");
	}
}
