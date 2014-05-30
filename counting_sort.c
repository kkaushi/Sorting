#include<stdio.h>

//counting sort: a type of stable sort[if same element occurs in an array, while sorting
// it makes sure that the element occuring first in the array is placed first in sorted array
//for eg: if unsorted_array[]={1,44,3,67,5,3} and sorted_array[]={1,2,2,5,44,67} so the 
//3 at index val 2 and 5 in unsorted array are placed at index val 1 and 2 in sorted respectively.]
void counting_sort(int * arr,int len,int range_begin, int range_end)
{
	int freqArr[100]={0},i=0,tempArr[100]={0};
	for(i=0;i<len;i++)
	{
		freqArr[arr[i]]+=1;
	}
	for( i=range_begin;i<=range_end ;i++)
	{
		freqArr[i]+=freqArr[i-1];
	}
	printf("hello\n");
	for(i=len-1;i>=0;i--)
	{
		tempArr[freqArr[arr[i]]]=arr[i];
		freqArr[arr[i]]-=1;
	}
	i=1;
	while(i<len)
	{
		printf("%d\n",tempArr[i]);
		i++;
	}
}

void main()
{
	int arr[]={2,4,3,1,4,3,8,4,5,66,65,4,3,2,2};
	counting_sort(arr,15,1,66);
	
}