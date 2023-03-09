/*
Program-22
Implement a Program to Find the Biggest Number in an Array of Numbers using Recursion 
Ravi wants to pick highest price in the vegetable market. So, we help to ravi which vegetable is height price.
Constraint
Program prints the largest number in an unsorted array of elements using recursion. The array used here is of type integer.

Sample Input
Enter size of the list: 
5
Enter 5 elements
5
12
16
10
15

Sample Output
Largest element of the array is
16

Case1:
Enter size of the list: 
5
Enter 5 elements
10
20
30
40
50
Largest element of the array is
50
*/
#include<stdio.h>
int m=-32768,i=0,j=0,n,a[100];
int max(){
	if(m<a[j])m=a[j];
	j++;
	if(j<=n)return max();
	return m;
}
int main(){
	printf("Enter array size 1-100:");
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	printf("max=%d",max());
}
