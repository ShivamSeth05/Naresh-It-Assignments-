#include<stdio.h>
int main(){
	int a[19]={1,2,6,2,4,1,5,1,6,6,6,7,6,2,8,2,6,3,1},b[20]={0};
	int i,j,c=1,temp,max=0,maxele=0;
		for(i=0;i<19;i++)
	printf("%2d",a[i]);
		puts("");
	for(i=0;i<19;i++){
		c=1;
		for(j=i+1;j<19;j++){
			if(a[i]==a[j]){
				if(a[i]==-1||a[j]==-1)continue;
				c++;
				a[j]=-1;
			}
			if(max<c){
				max=c;
				maxele=a[i];
			}
		}
	}
		for(i=0;i<19;i++)
	printf("%2d",a[i]);
	printf("\nmax frql ele %d",maxele);

}
