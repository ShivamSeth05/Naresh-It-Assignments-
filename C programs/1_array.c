#include<stdio.h>
int a[100],size,i,s,key,d,pos;

//filling array elements
fill_array(){
	printf("Enter five Array element:");
	for(i=0;i<size;i++){
		scanf(" %d",&a[i]);
	}
}

// Show arrays
show_array(){
	puts("Elements are \n=========================\n");
	printf("{");
	for( i=0;i<size;i++){
		//show array elements
		printf("%3d,",a[i]);
	}
		printf("\b }\n\n");
}

// Searching Elements or find index --via elements
search_array(){
	printf("\nEnter searching element:");
	scanf("%d",&s);
	for(i=0;i<size;i++){
		if(s==a[i])
		printf("\n %3d on index %d  ",a[i],i+1);	
	}
}

// Deleteing Elements--via index
//2 3 5 6 5 
delete_array(){
	int pos,temp;
	printf("\nEnter postion :");
	scanf("%d",&pos);
	for(i=0;i<size;i++){
		if(pos==i+1)
		{	size--;
			while(i<size){
				a[i]=a[i+1];
				i++;
			}
		}
	}
}

//1 3 5 6 2
// Inserting elements-- via pos...
insert_array(){
	int val;
	printf("\n\nInsert an element \nEnter the position ");
	scanf("%d",&pos);
	printf("Enter the val: ");
	scanf("%d",&val);
	//	for(i=0;i<=size;i++){
	//		if(pos==i+1){
	//			size++;
	//			while(i<size){
	//			int temp=a[i];
	//			a[i]=val;
	//			val=temp;
	//			i++;
	//			}
	//		}	
	//	}
	if(pos>size+1|| pos<1)printf("\n\n\tSize must be from 1 to %d\n\n\t Try-Again\n",size+1);
	else{
		size++;
		for(i=pos-1;i<=size;i++){
			int temp=a[i];
			a[i]=val;
			val=temp;
			}
	}
	//--vishal
//	for(i=size;i>=pos;i--) a[i]=a[i-1];
//	a[i]=val;
//	size++;
}

//2 5 3 5 25 8
// find max Element  
max_array(){
	int hv=a[0];
	for(i=0;i<size;i++){
		if(hv<a[i])hv=a[i];
	}
	printf("Max Element is :%d\n\n",hv);
}

// find min Element  
min_array(){
	int lv=a[0];
	for(i=0;i<size;i++){
		if(lv>a[i])lv=a[i];
	}
	printf("Min Element is :%d\n\n",lv);
}

// find frqn Element  
// 1 2 3 5 2 3 8 
find_freq(){
	int j,c,temp[100]={0},f;
	for(i=0; i<size; i++){
		for(c=1,j=i+1; j<size; j++){
			if(a[i]==a[j]){c++;temp[j]=-1;}
		}if(temp[i]!=-1)temp[i]=c;
	}
	for(i=0;i<size;i++)
	if(temp[i]!=-1)
	printf("\n%d is %d times",a[i],temp[i]);
}

// find Odd sum
oddsum(){
	int os=0;
	for(i=0;i<size;i++){
		if(a[i]%2==1)// for even sum = if(a[i]%==0)
		os=os+a[i];
	}
	printf("%d",os);
}

//Selection Sort - "take left side value then compare with all right side elements"
// 3 2 3 4 5 6 7 
Selectionsort(){
	int j,temp;
	for (i=0;i<size-1;i++){     //0 
		for(j=i+1;j<size-1;j++)  //1 2
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}	
	}
}

//Bubble Sort - "take one left side then compare side by side elements"
Bubblesort(){
	int j,temp;
	for (i=0;i<size-2;i++){     //0 
		for(j=0;j<size-i-1;j++)  //1 2
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}	
	}
}

// odd value the after odd put even - using buble sort
oddfirsttheneven(){
	int j,temp;
	for (i=0;i<size-2;i++){     //0 
		for(j=0;j<size-i-1;j++)  //1 2
		if(a[j]%2==0 ){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	
	}	
}
// 1 2 5 4 3 1
// find max1 and max2 in given array 
findmax1max2(){
	int max1,max2=0,min1,min2;
	for(i=1;i<size;i++){
		if(max1<a[i] &&){
		max2=max1;
		max1=a[i];
		}
	}
	min1=max1;
	min2=max2;
	for(i=0;i<size-1;i++){
		if(min1>a[i]){
			min2=min1;
			min1=a[i];
		}
	}
	
 	printf("max1: %d and max2: %d ",max1,max2);
	printf("min1: %d and min2: %d ",min1,min2);	
}
mergertwoarray(){
	int b1[n],b2[5];
	printf("Enter the first array :")
	for(i=0;i<)
	
}


int main(){
	printf("Enter the size of Array:");
	scanf("%d",&size);
	fill_array();
	show_array();
//	search_array();
//	delete_array();
//	show_array();
//	insert_array();
//	show_array();
//	max_array(); 
//	show_array();
//	min_array();
//	show_array();
//	find_freq(); 
//  oddsum();
//	Selectionsort();
//	Bubblesort();
//	oddfirsttheneven();
//	show_array();
//	primearray();//not completed yet
	findmax1max2();// not completed yet
	mergertwoarray();// 

}
