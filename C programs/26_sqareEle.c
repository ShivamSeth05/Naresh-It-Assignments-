//	Program-26
//	Implement a Program to Input an Array, Store the Squares of these Elements in an Array & Print it 
//	Constraints:
//	Inputs array & stores the of these elements in an array & print them
//	Program to input array & stores the of these elements in an array & print them.
//	print_square(int x[ ]) Function required with no return argument
//	Sample Input
//	Enter size of row array
//	2
//	Enter size of column
//	2
//	Enter the elements of matrix:
//	10
//	20
//	30
//	40
//	Sample Output
//	Squares of these Elements
//	100	400	
//	900	1600	
//	
//	Case1:
//	Enter size of row array
//	1
//	Enter size of column
//	1
//	Enter the elements of matrix:
//	10
//	Squares of these Elements
//	100	
//	Case2:
//	Enter size of row array
//	2
//	Enter size of column
//	2
//	Enter the elements of matrix:
//	55
//	25
//	36
//	86
//	Squares of these Elements
//	3025	625	
//	1296	7396	
//	Case3:
//	Enter size of row array
//	2
//	Enter size of column
//	3
//	Enter the elements of matrix:
//	14
//	15
//	16
//	17
//	18
//	19
//	Squares of these Elements
//	196	225	256	
//	289	324	361
//	Case4:
//	Enter size of row array
//	3
//	Enter size of column
//	2
//	Enter the elements of matrix:
//	5
//	9
//	8
//	7
//	6
//	2
//	Squares of these Elements
//	25	81	
//	64	49	
//	36	4




#include<stdio.h>
print_square(int x[], int rn, int cn){
	int temp[10][10],i,j,k=0,sqr;
	for(i=0;i<rn;i++){
		for(j=0;j<cn;j++){
			temp[i][j]=(x[k]*x[k]);
			k++;
		}			
}

for(i=0;i<rn;i++){
	for(j=0;j<cn;j++){
		printf("%4d",temp[i][j]);
		}
		puts("");			
}

}

int main(){
	int x[100],i,j,rn,cn;
	printf("Enter the size row and col");
	scanf("%d%d",&rn,&cn);
	for(i=0;i<rn*cn;i++){
		scanf("%d",&x[i]);
	}
printf("Squares of these Elements:\n");
	print_square(x,rn,cn);
}
