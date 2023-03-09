#include<stdio.h>
#include<conio.h>

void pat4(int r,int c){
	int i,j,k,cn=0;
//	printf("Enter the r and c");
//	scanf("%d%d",&r,&c);
	k=1;
	for(i=1;i<=r;i++){
		cn++;
		if(cn%2==1&&cn>1)k++;
		for(j=1;j<=c;j++){
			
		if(i%2==1)printf("%2c",64+k);
		else printf("%2c",96+k);
		
		}
		puts("");	
	}
}

int pat3(int r,int c){
		int i,j,k;
//	printf("Enter the r and c");
//	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		k=1;
		for(j=1;j<=c;j++){
		if(j%2==1)printf("%2c",64+k);
		else printf("%2c",96+k++);
		
		
		}
		puts("");	
	}
}

int pat2(int r ,int c){
		int i,j;
//	printf("Enter the r and c");
//	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
		if(i%2==1)printf("%2c",64+i);
		else printf("%2c",96+i);
			
		}puts("");
	}
}
	
void pat1(int r ,int c){	
	int i,j;
//	printf("Enter the r and c");
//	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(j%2==1)printf("%2c",j+64);
			else printf("%2c",j+96);
		}puts("");
	}
}
int main(){
	int r,c;
	printf("Enter the r and c");
	scanf("%d%d",&r,&c);
	pat1(r,c);//function calling with arguments
	puts("================================");
	pat2(r,c);//function calling with arguments
	puts("================================");
	pat3(r,c);
	puts("================================");
	pat4(r,c);
	puts("================================");
	
}
