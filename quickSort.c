//--QuickSort--:The algorithm of quicksort goes like this:
//--1) The leftmost index of the array is taken as left variable and right for the rightmost variable.
//--2) I have taken the center index of the array as the pivot value 
//							--(the starting and the ending values can also be taken as pivots)
//--3) The idea is to divide the array into two subsets such as the left part of array contains the values 
//--less than pivot value and values on the right subset contains the values greater than the pivot value.

//--4) After the above step of partitioning, recursion is used to call the subarrays is the same way by quicksort()


//consider the example :
/*
eg array - 
9	1	2	8	2
L		P		R
swap 9 and 2(inspite 2 equals pivot value(ie value at index P)) and move the indexes

2	1	2	8	9
	L	P	R

no swapping here and move both the pointers 
2	1	2	8	9
		P	
		L
		R

as left == right return pivot(=2 (index of value 2))
and so on the subarrays are carried on with sorting

*/




#include<stdio.h>
//partition() recieves the array and the pivot value and it returns the array divided into two subsets with pivot
//value at the desired position(values<pivot value to the left and values>pivot value to the right of pivot value) 
//and it returns the new position of the pivot element. 
//pivot received as arguement is index value here and not array value
int partition(int start,int a[],int pivot,int size)
{
	int left=start,right=start+size-1,temp,newpivot,pivotvalue;
	static int flag1,flag2;
	//pivotvalue=a[pivot];
	
	//we stop when left==right or left>right
	while(left<right)
	{
		//flag is one if we need to swap ie the current element is at incorrect position relative to the pivot value
		if(a[right]<=a[pivot])
			flag1=1;
		else
		//flag is 0 if the current element is at the correct position 
			flag1=0;		
		
		//same here for the left position
		if(a[left]>=a[pivot])	
			flag2=1;
		else 
			flag2=0;

		//if both right and left are at incorrect positions
		if(flag1==1 && flag2==1)
		{
			//swapping of values at the left and right positions
			temp=a[right];
			a[right]=a[left];
			a[left]=temp;
			
			
			//and the following if and else assigns new value to the pivot index as the 
			//pivot value has been swapped
			if(right==pivot)//as after swapping right value becomes left
				pivot=left;
			else if(left==pivot)//as after swapping left value becomes right
				pivot=right;
			
			
			//if left or right is at pivot position, we donot move the left or right index (the if 
			//condition checks that)
			
			
			//in cases of value at some index(left or right) ==pivot value but index are different(from pivot (ie
			//in the case of array containing multiple values same as pivot value)) we move the indexes  
			//after swapping ie left++ and right--

			if(left!=pivot)
				left++;
			if(right!=pivot)
				right--;
		}	
		
		//if left index value is at correct position and we want to move the left index(there is a difference 
		//in index value and the index itself ie left and right are indexes whereas the values at left and
		//right are compared to the values at pivot index; pivot is also a index)
		if(left<=start+size-1 && flag2==0)
			left++;
		if(right>0 && flag1==0 )
			right--;
	}
	
	if(left>=right)
		return pivot;
}

void quicksort(int start,int stop,int a[])
{
	int size,pivot,centerIndex;
	//pivot is the index of the pivot value
	//case of single element arrays
	if(start>=stop)
		return;
	size=stop-start+1;
	//same some case of single element arrays
	if(size==1 || size==0)
		return;
	
	if(size%2!=0)
		pivot=start+(size-1)/2;
	else
		pivot=start+size/2;
	centerIndex=partition(start,a,pivot,size);
	quicksort(start,centerIndex-1,a);
	quicksort(centerIndex+1,stop,a);
}
 
void main()
{
	
	//three cases the array is tested on.....
	//int a[]={8,2,4,7,8,9,7}, i, size=sizeof(a)/4,pivot,centerIndex;
	//int a[]={0,1,2,2,2,2,2,10,3,4,5,6,66,44,44,7,8,98,9},i, size=sizeof(a)/4,pivot,centerIndex;
	int a[]={15,411,98,586,77,45,85,12,59,36,58,58,58,58,58,77,121,223,39,1,1,1,1,1,1,1}, i, size=sizeof(a)/4,pivot,centerIndex;
	//int a[]={3,2,5,4,1}, i, size=sizeof(a)/4,pivot,centerIndex;
	
	
	quicksort(0,size-1,a);

	//printing sorted array
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);

}
