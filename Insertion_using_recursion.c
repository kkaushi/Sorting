/*
	Insertion sort - using recursion
*/

#include<stdio.h>

void InsertionSortusingRecursion(int * arr, int endIndex)
{
	int tempIndex=0,tempValue=0;

	if(endIndex == 0)
		return ;
	InsertionSortusingRecursion(arr,endIndex-1);
	tempIndex=endIndex;
	tempValue = arr[endIndex];
	while(arr[tempIndex -1] > tempValue && tempIndex-1>=0)
	{
		arr[tempIndex]= arr[tempIndex-1];
		tempIndex--;
	}
	arr[tempIndex]=tempValue;
	return ;		
	
}

void main()
{
	int a[]={5,4,1,6,7,3,2},aLength=7,i;
	
	InsertionSortusingRecursion(a,aLength-1);
	

	for(i=0;i<=aLength-1;i++)
		printf("%d\n",a[i]);
	

}


