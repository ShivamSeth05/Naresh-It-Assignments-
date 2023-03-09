/*Write a program to prints all EMIRP(Reverse of prime numbers from array.

input : int arr[]={13,23,27,17,37};
output : 13,17,37;
*/
#include<stdio.h>
int main(){
	int arr[100],size;
	int i,j,b,c,rem,reverse=0;
	int prime[10],t=0;
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter the %d Element into the Array:\n",size);
	for(i=0;i<size;i++)//17
	{
		scanf("%d",&arr[i]);
  		for(b=arr[i];b!=0;b=b/10)
		  {
    		rem = b % 10;
    		reverse= reverse* 10 + rem;  
 		  }//reverse loop 
		arr[i]=reverse;//71
 		reverse=0;//0
 		c=0;
 		for(j=1;j<=arr[i];j++){ // 0 to 71
 			if(arr[i]%j==0){
 				c++;
			 }//if
			 if(c==2){
		 	prime[t]=arr[i];
		 	t++;
		 	c=0;
		 }//prime outer loop
//		 if(c==0){
//		 	prime[t]=arr[i];
//		 	t++;
		 }//if
	}//inner loop
  printf("\n Twisted Prime Number in Above Array:\n\n");   
  for(i=0;i<t;i++)
    {
		printf("%10d",prime[i]);
	}
}
