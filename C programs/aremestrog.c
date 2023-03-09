// = 1+125+27 = 153*/
#include <stdio.h>
void main(){
    int i,r,sum,temp,n,c;

    printf("Enter the n: ");
    scanf("%d",&n);

    printf("Armstrong numbers are : ");

    for(i=1;i<=n;i++){
         temp=i;
         sum = 0;
         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
				sum=sum+pow(r,3);
         }
         if(sum==i)
             printf("%d ",i);
    }

}
