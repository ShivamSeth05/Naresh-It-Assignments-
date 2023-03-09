#include<stdio.h>
// 28 7 =4 // 11 /12
// 12/ 24 == 6 12  3 6  1 3
int main(){
	int n,d,frac,i;
	printf("Enter the Positive Num and Denm");
	scanf("%d%d",&n,&d);
	if(n%d==0){
		frac=n/d;
		printf("%d",frac);
		return 0;
	}
	else{
		for(i=2;i<=n;i){
			if(n%i==0&&d%i==0){
				n=n/i;
				d=d/i;
			}
			else i++;
		}

	if(n>d)
	printf("%d pow %d / %d",n/d,n%d,d);
	else printf("%d  %d",n,d);
	}
}
