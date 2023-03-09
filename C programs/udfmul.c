//	1  10  11  20  11  12  13  14  
//	2  9   12  19  21  22  23  24
//	3  8   13  18  31  32  33  34
//	4  7   14  17
//	5  6   15  16
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k=1,o=8,t=1;
	
	for(i=1;i<=5;i++){	k=i;
		for(j=1;j<=4;j++){
			if(j%2==1){
			printf("%3d",k++);
		}else {printf("%3d",k=k+o);k=k+t;}
		}
		o=o-2;//6
		t=t+2;
		puts("");
		
	}
}
