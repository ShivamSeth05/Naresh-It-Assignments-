/* Write a program to print all missing elements from array.
input : {1,2,4,6,7,10};
output : Missing elements are : 3,5,8,9
*/
#include<stdio.h>
int main()
{
	int i,j;
	int  static a[6]={1,2,4,6,7,10};
	printf("missing ele is");
	int k=a[5]+1;
	
	for(i=1,j=0;i<k;i++){
	if (a[j]==i){
		k--;
		j++;
		continue;
	}
	printf("\n%d %d ",a[j],i);
	
	}

}
