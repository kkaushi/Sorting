//--Selection Sort--: In selection sort, we compare first element of array with every other element and swap if required
//so that after first iteration, shortest number is at first index,similarly for second,third and other indexes of the 
//array on other iterations,till the no of elements remaining is 1. We can also move from last index to first (in case of largest selection at each iteration)
//It is called selection sort as we select the smallest/largest element in one iteration


#include<stdio.h>

void swap(int * pre, int * post)
{
	int * temp;
	//needed to have separate memory location for storing the temp value
	temp=malloc(sizeof(int));
	*temp=*post;
	*post=*pre;
	*pre=*temp;
}
void main()
{
	int a[]={5,41,98,56,59,36,58,77,121,223,39},i,j,n,temp,i1;
	n=sizeof(a)/4;		
	printf("no of elements in array\t%d\n",n);
	
	for(i=0;i<=n-2;i++)
	{
		for(j=i;j<=n-1;j++)
		{	if(a[i]>a[j])
			{
				//using function swap
				swap(a+i,a+j);
				//or the code below can be used
				//temp=a[j];
				//a[j]=a[j+1];
				//a[j+1]=temp;       
			}
		}
		
		for(i1=0;i1<=n-1;i1++)
			printf("%d\t",a[i1]);

		printf("\n");
	
	}	
	
}


/*
//Implementing Selection sort in linked list
typedef struct tagNode
{
	int curLoc;
	int newLoc;
	char val;
	struct tagNode * next;
}node;
node *start;


char CharAtPosition(int i)
{
	node * temp;
	int count =1;
	temp = start;
	while(count < i)
	{
		count++;
		temp=temp->next;
	}
	return temp->val;
}

void SwapValAtPosition(int i,int j)
{
	node *temp1,*temp2;
	int count =1;
	temp1=start;
	temp2=start;
	while(count<i)
	{
		count++;
		temp1=temp1->next;
	}
	count=1;
	while(count<j)
	{
		count++;
		temp2=temp2->next;
	}	
	count=temp1->newLoc;
	temp1->newLoc=temp2->newLoc;
	temp2->newLoc=count;
		

}

void main()
{
	node *temp,*temp2;
	int i,LengthLL,j;
	//creating link list
	start=temp=temp2=NULL;
	for(i=1;i<6;i++)
	{
		temp = malloc(sizeof(node));
		temp->curLoc=i;
		temp->newLoc=i;
		temp->val=70-i;
		temp->next=NULL;
		if(start == NULL)
		{
			start=temp;
		}
		else
		{
			temp2=start;
			while(temp2->next != NULL)
				temp2=temp2->next;
			temp2->next=temp;
		}
		
	}
	

	//length of linked list
	LengthLL=0;
	temp = start;
	while(temp != NULL)
	{
		LengthLL++;
		temp=temp->next;
	}

	//implementing selection sort
	for(i=1;i<=LengthLL-1;i++)
	{
		for(j=i;j<=LengthLL;j++)
		{	if(CharAtPosition(i)>CharAtPosition(j))
				SwapValAtPosition(i,j);
		}
		
	}	
	printf("hello");

	

}*/
