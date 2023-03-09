#include<stdio.h>
int main(){
	int i,j,n=5,c=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		if(i+j<=n+1)printf("   ");
		else printf("%3d",c++);
	puts("");
}
for(i=n;i>=1;i--){
		for(j=1;j<=n-1;j++)
		if(i+j<=n+1)printf("    ");
		else printf("%4d",c++);
	puts("");
}
}
