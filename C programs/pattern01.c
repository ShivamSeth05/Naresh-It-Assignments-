#include<stdio.h>
#include<conio.h>
//first- pattern
void pattrn1(){
	int i,j;
	for( i=1;i<6;i++){
		for( j=1;j<6;j++){
		printf("%2d",j);
		}
		puts("");
	}	
}

//senond patter

void pattrn2(){
	int i,j;
	for( i=5;i>=1;i--){
		for( j=0;j<6;j++){
		printf("%2d",i);
		}
		puts("");
	}	
}

//third patter

void pattrn3(){
	int i,j;
	for( i=5;i>=1;i--){
		for( j=5;j>=1;j--){
		printf("%2d",j);
		}
		puts("");
	}	
}

void pattrn4(){
	int i,j;
	for( i=1;i<=5;i++){
		for( j=1;j<=5;j++){
		printf("%4d",2*i*j);
		}
		puts("");
	}	
}
void pattrn5(){
	int i,j;
	for( i=1;i<=5;i++){
		for( j=1;j<=5;j++){
		printf("%4d",i*j);
		}
		puts("");
	}	
}
void pattrn6(){
	int i,j;
	for( i=1;i<=5;i++){
		for( j=1;j<=5;j++){
		printf("%4d",(i*j)+j-1);
		}
		puts("");
	}	
}

void pattrn7(){
	int i,j,temp,k;
	for( i=0;i<5;i++){
		for( j=1;j<5;j++){
		printf("%4d",j);
		}
		puts("");
	}	
}
pattrn8(){
	int i,j,k=1,o=8,t=1;
	for(i=1;i<=5;i++){	k=i;
		for(j=1;j<=4;j++){
			if(j%2==1){
			printf("%3d",k++);
		}else {printf("%3d",k=k+o);k=k+t;}
		}
		o=o-2;//6
		t=t+2;//2
		puts("");
		
	}
}

int main(){
	pattrn1();
	puts("===================================");
	pattrn2();
		puts("===================================");
	pattrn3();
		puts("===================================");
	pattrn4();
		puts("===================================");
	pattrn5();
		puts("===================================");
	pattrn6();
	puts("===================================");
	pattrn7();
	puts("===================================");
	pattrn8();
	}


