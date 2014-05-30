//--Shell Sort--:the shell sort first sorts elements situated at h places apart for each element
//this is continued and the value of h is decremented till h=1 ie the array is one sorted 
//for eg if the array is : 89,78,65,8,99,98,66,32,23(9 elements)
//it can be 8 sorted first we get:23,78,65,8,99,98,66,32,89
//it can be 2 sorted now(8/3=2) we get:23,8,65,32,66,78,89,98,99


#include<stdio.h>
#include<stdlib.h>

//simple insertion sort implemented for h-sorting of an array 
void insertionSort(int a[],int sizeofa,int h)
{
	int i,val,j,i1,even;
	
	int size=0;
	
	for(i=0;i<sizeofa;i+=h)
		size++;
	
	if(sizeofa%2==0)
		even=1;
	else
		even=0;
	
	for(i1=0;i1<sizeofa;i1++)
	{
		for(i=i1+h;i<sizeofa;i+=h)
		{
		
			val=a[i];
			j=i;
			//traverse the subarray till we find the location where val[element]>val[position-1]
			while(a[j-h]>val && j-h>=0)
			{
				a[j]=a[j-h];
				j-=h;
			}
			//inserting the element at the position
			a[j]=val;
		}
	}
}

void main()
{
	int a[]={14,7,9,12,2,4,6,13,1,11,10,8,3,5,24,34,456,56,567,63,34,621,567,55,22,54,77,89},i,j,k;
	int size=sizeof(a)/4,val,h,h1,flag=0;
	int l=0,r=4;
	
	printf("\n\n\ninitial array is :\n\n");
	for(i=0;i<=size-1;i++)
		printf("%d\t",a[i]);
	printf("\n");

	h=size-1;

	
	while(h>=1)
	{
		//simple insertion sort h-sorted (ie elements placed at h distance apart in the array are sorted in the sequence)
		insertionSort(a,size,h);
		printf("\n\n\n%d sorted array is :\n\n",h);
		for(i=0;i<=size-1;i++)
			printf("%d\t",a[i]);
		printf("\n");
		h=h/3;
	}

	printf("\n\n\nfinal sorted array is :\n");
	for(i=0;i<=size-1;i++)
		printf("%d\t",a[i]);
	printf("\n\n\n\n");

}