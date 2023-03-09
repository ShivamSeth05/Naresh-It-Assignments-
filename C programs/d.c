#include<stdio.h>
int main(){
	int N=4;
	  int i,res=0,c=0,t=0;
        for(i=0;i<=N;i++){
            printf("\nfdf= %d",N);
            c++;
            if(N%2==0){
			N=N/2;
			if(N==1) {c++;break;
			}
			}
            else {
		
                N=(N+1)/2;
//                if(t==1&&c>1){break;}
            }
            res=c+1;   
            printf("%d",res); 
            
            
        }
       printf("\n%5d",res); 
    }

