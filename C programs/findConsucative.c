// {49 1 3 200 2 4 70 5}
// 1 2 3 4  5 49 70 200
//	1 4 7 6 2 3 9 10 14 13 11 12 
//  1 2 3 4 6 7 9 10 11 12 13 14 
//	1 2 3 4 6 7

#include<stdio.h>
int main(){
	int a[100],size,j,i,k,beg=0,end=0,b=0,temp=0;
	printf("Enter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++)scanf("%d",&a[i]);
     // sorting the array in ascending order
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
			
	}
	printf("\narray after sort\n");
	for(i=0;i<size;i++)printf("%4d",a[i]);
	// making it distinct array
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{ 
			  for(size--, k=j;k<size;k++)
			  { a[k]=a[k+1];
			  }
			  j--;
			}
			
		}
	}
	printf("\n%4d",size);
	printf("\ndistinct array:\n");
	for(i=0;i<size;i++)printf("%4d",a[i]);
	printf("\nlongest cons seq");
	//printing longest consequtive sequence
	int maxc=0,c=0;
	//int temp_array[10][10];
	//temp_array[0]={0};
	for(i=0;i<size;i++) // 1 2 8  3 4 
	{ 
	if(( a[i+1]-a[i])==1){
		c++;
		if(c>maxc){
			maxc=c;
			beg=b;}
		}
	else{
		printf("\nmaxc=%d begin=%d", maxc,beg);
		b=i+1;
		c = 0;
	}
	}
	for(i=beg;i<beg+maxc+1;i++)printf("\n%d",a[i]);
	
}
