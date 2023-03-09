#include<stdio.h>
#include<conio.h>
int main(){
	int max,n1,n2;
	printf("Enter the n1 and n2");
	scanf("%d %d",&n1,&n2);
	max =n1>n2?n1:n2;
	while(1){
	
	if(max%n1==0 && max%n2==0){
		printf("lcm is :%d",max);
		break;
	}
	max++;
}
}
