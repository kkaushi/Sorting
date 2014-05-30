//--Heapsort--:this sort is based on the array representation of a heap
//--A heap has 2 properties 1-it is a binary tree(atmost 2 child nodes for a node and insertion order is fixed that 
//--is left child is inserted first followed by the right child) 2-a heap is always either a min or max heap(in a 
//--min/max heap a node is always smaller/greater than the child nodes, however there is no relation among the sibling
//--nodes)


//-------Algorithm::::

//--first of all the array is converted into a maxheap 
//--the heapsort algorithm is then applied (pg 160 OF COREMAN PDF )--according to this algo, if we swap the root of
//--the max heap(the largest element of the array) with the bottomost rightmost node of the heap ie we swap first 
//--element of the maxheap with the last element and reduce the heapsize by one .
//--now the largest element of the array is at the last 
//--the remaining portion of the heap is rearranged to form the max heap again and the procedure is repeated

//--the basic idea is to form a maxheap so as to get the largest element at the top and then put it at the last of 
//--array 
//--the remaining elements of the heap are rearranged to form a maxheap again to get the second largest element at the
//--top and this way we continue the process...

#include<stdio.h>

//heapsize gives the size of the heap at any instant
int heapsize;

//array is passed along with an index
//the value at this index is the root node 
//this value is compared with it's child nodes at indexes 2*i and 2*i+1(if they exist ),and largest value of the three
//is placed at the position i
void MaxHeapify(int a[],int i )
{
	int l,r,largest,temp,flag1=0,flag2=0,largest_index;

	largest=a[i];
	largest_index=i;
	
	//if left child exists
	if(2*i<=heapsize)
	{	
		//l=value of left child
		l=a[2*i];
		flag1=0;
	}
	else 
		flag1=1;
	
	//if right child exists
	if(2*i+1<=heapsize)
	{
		//r=value of right child
		r=a[2*i+1];
		flag2==0;
	
	}
	else 
		flag2=1;

	
	
	//if no child exists
	if(flag1==1 && flag2==1)
		return;
	
	//if both child exists
	if(flag1==0 && flag2==0)
	{
		if(l>r )
		{
			largest=l;
			largest_index=2*i;
		}
		else 
		{
			largest=r;
			largest_index=2*i+1;
		}
	}
	
	//if only left child exists
	if(flag1==0 && flag2==1)
		if(l>a[i])
		{
			largest=l;
			largest_index=2*i;
		}
		else	
		{
			largest=a[i];
			largest_index=i;
		}
	
	
	//if only right child exists
	if(flag2==0 && flag2==1)
		if(r>a[i])
		{
			largest=r;
			largest_index=2*i+1;
		}
		else
		{
			largest=a[i];
			largest_index=i;
		}
			

	
	if(largest!=i && largest>a[i])
	{
		temp=a[i];
		a[i]=largest;
		a[largest_index]=temp;
		MaxHeapify(a,largest_index);
		//return;
	}
}

void CreateMaxHeap(int a[])
{
	int i;
	for(i=heapsize/2;i>=1;i--)	
		MaxHeapify(a,i);	
}


void HeapSort(int a[])
{
	int temp,i;
	//this method generates the maxheap
	CreateMaxHeap(a);
	printf("the max heap generated is:\n");
	for(i=1;i<=heapsize;i++)
		printf("\t%d ",a[i]);
	printf("\n");
	
	//swapping of the largest element with the last element of the heap 
	//and reconstructing the maxheap with the remaining elements..
	for(i=heapsize;i>=2;i--)
	{
		temp=a[i];
		a[i]=a[1];
		a[1]=temp;
		heapsize--;
		MaxHeapify(a,1);
	}
}

void main()
{	
	int i,a[]={0,1,2,2,2,2,2,10,3,4,5,6,66,44,44,7,8,98,9},size;
	heapsize=sizeof(a)/4-1;
	size=heapsize;
	HeapSort(a);
	printf("\nthe sorted array is\n");
	for(i=1;i<=size;i++)
		printf("%d\n",a[i]);	

	
}