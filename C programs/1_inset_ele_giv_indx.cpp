#include<stdio.h>
int  main(){
	int a[100],i,ind,s,ele;
	printf("Enter the size:");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++){
		printf("%3d",a[i]);
	}
	printf("\nEnter index no [ 0 to %d] and ele:",s);
	scanf("%d%d",&ind,&ele);
	for(i=s;i>ind;i--)
	a[i]=a[i-1];
	a[i]=ele;
		for(i=0;i<=s;i++){
		printf("%3d",a[i]);
	}
}
