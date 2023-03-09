#include<stdio.h>
int n,a[100],d,r=0,i,rev=0;
void reverse(){
	for(i=0;i<n;i++){
		d=a[i];
		while(d!=0){
			r=d%10;
			rev=rev*10+r;
			d=d/10;
		}
		a[i]=rev;
		rev=0;	
	}
}

primearray(){
	int c=0,j,k=0;
	for(i=0;i<n;i++){
		for(j=1;j<=a[i];j++){
			if(a[i]%j==0){
				c++;
			}
		}
			if(c==2){
				a[k]=a[i];
				k++;

			}
			else {	a[k]=0;			
			k++;	}                                        
			c=0;				
	}

}
delzerp(){
	int j;
		for(i=0;i<n;i++){// 0
		if(a[i]==0) //0
		{
			for(j=i;j<n;j++){
				a[j]=a[j+1];
				}
				n--; 
		}	
	}
}


show(){
	puts("");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
int main(){
	int j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	primearray();//find prime
	delzerp();//deleting all zero in aray
	reverse();//reverse
	primearray();
	delzerp();
	reverse();
	show();//print update ararye
}
