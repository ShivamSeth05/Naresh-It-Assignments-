//#include<stdio.h>
//int main(){
//	
//	int i,j,a[10][10],n,rowsum=0,colosum=0,ds=0,d2s=0;
//	
//	printf("Enter the no of row and col");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//		printf("Enter the element a[%d][%d]",i,j);
//		scanf("%d",&a[i][j]);
//		}
//	}
//		for(i=0;i<n;i++){
//		for(j=0;j<n;j++)
//			printf("%2d",a[i][j]);
//			puts("");
//		}//just print
//		
//		for(i=0;i<n;i++)
//	  	for(j=0;j<n;j++)
//	 	{  if(i==j)
//	     ds=ds+a[i][j];
//	  	}//first digonal
//	  	
//	  	for(i=0;i<n;i++)
//		{	rowsum=0;
//	    for(j=0;j<n;j++)
//	    rowsum=rowsum+a[j][i];
//	    if(rowsum!=ds)printf("not a magic matrix");return 0;
//	    }//rowsum
//	     
//	    for(i=0;i<n;i++)
//		{ 	colosum=0;
//		  for(j=0;j<n;j++)
//		  colosum=colosum+a[j][i];
//		  if(ds!=colosum)printf("not a magic matrix");return 0;
//	    }//column sum
//	    
//	    
//		for(i=0;i<n;i++)
//		{
//		for(j=0;j<n;j++)
//		    {  if(i+j==n-1)
//			  d2s=d2s+a[i][j];
//			}
//		}// 2 diagonal  sum
//		
//		if(ds==d2s && ds==rowsum && ds==colosum)
//		printf("\nmagic matrix");
//		else
//		printf("\nnot a magic matrix");
//			
//}		
#include<stdio.h>
int main()
{
	int a[10][20],n,i,j,rsum=0,csum=0,d1sum=0,d2sum=0;
	printf("enter no rows=colum ");scanf("%d",&n);
	printf("\nenter %d elements\n",n*n);
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)scanf("%d",&a[i][j]);
	  
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	  {  if(i==j)
	     d1sum=d1sum+a[i][j];
	  }// diagonal 1 sum
	  
	for(i=0;i<n;i++)
	{	rsum=0;
	  for(j=0;j<n;j++)
	  rsum=rsum+a[i][j];
	  if(rsum!=d1sum)
	  {printf("not a magic matrix");return 0;
	  }  
    }// rows sum
    
    for(i=0;i<n;i++)
	{ 	csum=0;
	  for(j=0;j<n;j++)
	  csum=csum+a[j][i];
	  if(d1sum!=csum)
	  {printf("not a magic matrix");return 0;
	  }  
    }//column sum
	 
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	    {  if(i+j==n-1)
		  d2sum=d2sum+a[i][j];
		}
	     
	}  // diagonal 2 sum
	if(d1sum==d2sum && d1sum==rsum && d1sum==csum)
	printf("\nmagic matrix");
	else
	printf("\nnot a magic matrix");
	
}
