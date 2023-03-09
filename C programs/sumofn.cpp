#include<stdio.h>
#include<conio.h>
int main(){
	int n,sum,c=0;
	float avg;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0){
		sum = sum + n;
		n--;
		c++;
	}
	avg=(float)sum/c;
	printf("Sum is %d",sum);
	printf("Avg is %.2f",avg);
}
