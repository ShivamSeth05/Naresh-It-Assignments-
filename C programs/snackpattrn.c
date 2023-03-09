
//1 2 3 4 5
//11 10 9 8 6
//12 13 14 15 16


int main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){ //1 2 3 4 5
			if(i%2==1)
			printf("%4d",k++);//6
			else
			printf("%4d",--k);
		}
		k=k+5; //5+5
		puts("");
	}
}

