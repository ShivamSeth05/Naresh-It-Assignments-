//1 3 5   7  9     11  12  13  14  15
//3 5 7   9 11     21  22  23  24  25
//5 7 9  11 13
//7 9 11 13 15

#include<stdio.h>
#include<conio.h>
int main(){
	for(int i=1;i<=5;i++)
	{
		for(int j=i-1;j<5;j++)
		{			
			printf("%d ",j*2+1);			
		}
		for(int k=0;k<i-1;k++)
		{
			printf("%d ",k*2+1);
		} 
		puts("\n");
	}
}
