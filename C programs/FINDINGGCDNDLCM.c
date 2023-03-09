//	FINDING GCD AND LCM
//	Finding GCD and LCM
//	Write a program to Calculate the GCD and LCM of two numbers using functions in C and C++ and in java using methods.
//	SAMPLE INPUT AND OUTPUT:
//	Enter two integers:
//	3
//	9
//	Greatest common divisor of 3 and 9 = 3
//	Least common multiple of 3 and 9 = 9
//	
//	C Language Solution
//	-------------------
#include<stdio.h>
int GCD(int,int);
int LCM(int,int);
int main()
{
    int a,b,g,l;
    printf("Enter two integers:\n");
    scanf("%d %d",&a,&b);
    g=GCD(a,b);
    printf("Greatest Common divisor of %d and %d = %d\n",a,b,g);
    l=LCM(a,b);
    printf("Least Common multiple of %d and %d = %d",a,b,l);
    
    
    return 0;
}

int GCD(int a,int b)
{
    if(b==0)
    return a;
    else
    return GCD(b,a%b);
}

int LCM(int a,int b)
{
    int h=GCD(a,b);
    return (a*b)/h;
}
