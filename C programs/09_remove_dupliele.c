int main()
{
	int ARR[10],Oddarr[10],Evenarr[10],i,j=0,k=0,n,se=0,so=0;
//	system("cls");
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)//5
	{
	printf("arr[%d]:",i);
	scanf("%d",&ARR[i]);//1
	if(ARR[i]%2==0){
		Evenarr[j]=ARR[i];
		j++;
	}
	else
	{
	Oddarr[k]=ARR[i];
	k++;
	}
}
//	fflush(stdin);
	printf("Odd numbers\n");
	printf("{");
	for(i=0;i<k;i++)
	so=so+Oddarr[i];
	printf("sumOdd=%d,Count=%d,",so,k);	
	printf("\b}");	
	printf("\nEven numbers\n");
	printf("{");
	for(i=0;i<j;i++)
	se=se+Evenarr[i];
	printf("sumEven=%d,Count=%d,",se,j);
	printf("\b}");
}
