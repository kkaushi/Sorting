//--Bubble Sort--:In bubble sort we compare neighbour to the neighbour element and proceeds from first to last or from 
//last to first so that after each iteration we get the shortest at the first or largest at the last.We continue same 
//way for remaining elements in the array till the subarray size is reduced to 1;
#include<stdio.h>
#include<conio.h>

void swap(int * pre, int * post)
{
	int * temp;
	temp=malloc(sizeof(int));
	*temp=*post;
	*post=*pre;
	*pre=*temp;
}
void main()
{
	int a[]={5,41,98,56,77,45,85,12,59,36,58,77,121,223,39},i,j,n,temp,i1;
	//int a[]={5,4,2,3},i,j,n,temp;
	n=sizeof(a)/4;		
	printf("no of elements in array\t%d\n",n);
	for(i=0;i<=n-1;i++)
	{
		for(j=n-2;j>=0;j--)
		{
			
			//for sorting in ascending 
			if(a[j]>a[j+1])
			//for sorting in descending 
			//if(a[j]<a[j+1])
			{
				//using function swap
				swap(a+j,a+j+1);
				
				
				//or the code below can be used
				//temp=a[j];
				//a[j]=a[j+1];
				//a[j+1]=temp;
			}
			
		}
		//print step by step
		for(i1=0;i1<=n-1;i1++)
		{
			printf("%d\t",a[i1]);
			
		}	
		getch();
		printf("\n");
		
	}
	
	
getch();
}