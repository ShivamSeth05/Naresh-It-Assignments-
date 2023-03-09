#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,eve[10],odd[10],j=0,k=0;
	printf("Enetr array size");
	scanf("%d",&n);
	printf("Enetr array element");
	for(i=0;i<n;i++)// 5 - 
	{
		scanf("%d",&a[i]);// 1,2,3,4,5
		if(a[i]%2==0){
		eve[j]=a[i]; //EVE [2,4]
		j++;
		}
		else {
			odd[k]=a[i];k++;//ODD = [1,3,5]
		}
	}
	for(i=0;i<j;i++)printf("%8d",eve[i]);
	
	for(i=0;i<k;i++)printf("%8d",odd[i]);
//	printf("max element in array is=%d",max);
}
