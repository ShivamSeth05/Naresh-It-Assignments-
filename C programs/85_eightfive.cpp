#include<stdio.h>
#include<conio.h>
// main()
//{
//	int n ,num=0;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	while(n!=0){
////	int d=n/10;
//		num =num*10 + (n%10);
//		n/=10;
////		printf("%d %d",num,n);
//	}
//	while(num!=0){
//	switch(num%10){
//		case 1:puts("ONE");break;
//		case 2:puts("TWO");break;
//		case 3:puts("THREE");break;
//		case 4:puts("Four");break;
//		case 5:puts("FIVE");break;
//		case 6:puts("SIX");break;
//		case 7:puts("SEVEN");break;
//		case 8:puts("EIGHT");break;
//		case 9:puts("NINE");break;	
//		case 0:puts("zero");
//	}
//	num=num/10;
//	}
//	return 0;
//	
//	
//}
int main()  
{  
    int num, bin = 0, rem = 0, place = 1;  
  
    printf("Enter a decimal number\n");  
    scanf("%d", &num);  
  
    printf("\nBinary equivalent of %d is ", num);  
    while(num)  //11 5 2 
    {  
        rem   = num % 2;  
        num   = num / 2;  
//        printf("\n place is %d\n",place);
        bin   = bin + (rem * place);  
//        printf("\nbi is %d\n",bin);
        place = place * 10;  
    }  
    printf("%d\n", bin);  
  
    return 0;  
}  
