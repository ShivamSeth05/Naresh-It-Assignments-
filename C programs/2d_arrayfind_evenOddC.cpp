#include<stdio.h>
int main(){
	int a[10][10],i,j,k,temp=0,rn=4,cn=4;
	printf("Enter the elements");
	for(i=0;i<rn;i++){
		for(j=0;j<cn;j++){
			scanf("%d",&a[i][j]);
		}
		puts("");
	}
	
		for(i=0;i<rn;i++){
			//ase
			if(i%2!=0){
				for(j=0;j<cn-1;j++){
					for(k=j+1;k<cn;k++){
						if(a[i][j]>a[i][k])
						{
							temp=a[i][j];
							a[i][j]=a[i][k];
							a[i][k]=temp;
						}
					}	
			}
		}
		//des
		else {
			for(j=0;j<3-1;j++){
			for(k=j+1;k<cn;k++){
				if(a[i][j]<a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		
		}
	}
	}
	
		for(i=0;i<rn;i++){
		for(j=0;j<cn;j++){
			printf("%4d",a[i][j]);
		}
		puts("");
	}
}
