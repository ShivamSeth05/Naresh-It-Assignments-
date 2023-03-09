#include<stdio.h>
int calAddArr(int size){
	int a[10],sum=0,i;
	
	printf("Enter the marks");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	for(i=0;i<size;i++)sum=sum+a[i];
	return sum;
}
//=============================================
float stduent(size){
	int std[10],avg=0,i,sum=0;
	printf("Enter the marks");
	for(i=0;i<size;i++)scanf("%d",&std[i]);
	for(i=0;i<size;i++)sum=sum+std[i];
	avg=( float )sum/5.f;
	return avg;
}
//======================================================
sortArrStr(int size){
	char a[size][10],i,j,temp[100];
	printf("Enter the Name:");
	for(i=0;i<size;i++)scanf("%s",&a[i]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++){
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);//temp=a[i];
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}	
	}
	for(i=0;i<size;i++){
		printf("%s",a[i]);
		puts("");
	}	
}
//==================================================================
revrArrArr(size){
	int a[10],i,temp;
	printf("Enter the marks");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	for(i=0;i<size/2;i++){
		temp=a[i];
		a[i]=a[size-i-1];
		a[size-i-1]=temp;
	}
	for(i=0;i<size;i++)printf("%5d",a[i]);
	
}
//==========================================
findfrq(size){
	int a[10],i,c;
	printf("Enter the marks");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	c=1;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]==a[j])
			c++;
		}
	}
	
}

int main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
//	printf("%.2f",stduent(size));
//	printf("Sum=%d",calAddArr(size));
//	sortArrStr(size);
//	revrArrArr(size);
	findfrq(size);

}



