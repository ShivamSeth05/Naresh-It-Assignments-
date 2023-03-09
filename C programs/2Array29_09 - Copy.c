#include<stdio.h>
#include<math.h>
void medians(){
	int n;
	float median;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n],i,j,temp;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
//	sorting
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
//			printf("%2d",a[i]);
	}
//	find median --when odd
	if(n%2!=0)median=( float)a[n/2];
	else median=(float)(a[n/2]+a[(n/2)-1])/2;
	
//	show()
	for(i=0;i<n;i++){
		printf("%2d",a[i]);
	}
	printf("median is :%.2f",median);
}

void rangea(){
	int n,range;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n],i,j,temp;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
//	sorting
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	  // max - min range  
	range =a[n-1]-a[0];
//	show()
	for(i=0;i<n;i++){
		printf("%2d",a[i]);
	}
		printf("range is :%d",range);
}

ea_oa_ma(){
	int n,range,ev=0,od=0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0)ev=1;
		else od=1;
	}
//	printf("%d , %d",ev,od);
	if(ev==0 && od==1)puts("odd array");
	else if(ev==1&&od==0)puts("even array");
	else if(ev==1&&ev==1) puts("Mixed array");
	//show
	for(i=0;i<n;i++){
		printf("%2d",a[i]);
	}
}

//2+4+8
int rajnical(int y,int n){
	int tot=0,i,j,k,t;
	for( i=1;i<=n;i++){
			tot=tot+pow(y,i);
	}
	return tot;
}


int max(int a, int b)
{
    return a>b?a:b ;
}

int findMaxRec(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return max(arr[n-1], findMaxRec(arr, n-1));
}
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = 5;
    printf("Largest in given array is %d", findMaxRec(arr, n));
    return 0;
}


