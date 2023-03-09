#include<stdio.h>
#include<conio.h>
//perfact no 1 +2 +3 =6 factors sum 1,2,3
int main(){
	int n,p,i=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);p=n;
	while(i<=n/2){
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
//	printf("%d %d",p,sum);
	printf("%s",p==sum?"Perfact numbr":"Not Perfact");
	
	
}
