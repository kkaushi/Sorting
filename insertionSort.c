//--Insertion Sort--:in this sort, we start with the array size of 1 and the element at 2 position is compared with 
//the element at 1 position to find the correct position of the element at 2 position currently.
//After this the array size is incremented to two and the element at 3 position is compared with the array elements to 
//find it's correct position and it is then INSERTED to it's correct position, and hence the name Insertion sort.
//Similarly for other elements.

#include<stdio.h>


void swap(int * pre, int * post)
{
	int * temp;
	temp=malloc(sizeof(int));
	*temp=*post;
	*post=*pre;
	*pre=*temp;
}

/*void insertAtPosition(int val,int pos,int a[],int size,int su)
{
	int i;
	
	for(i=size;i>=pos;i--)			



	a[pos]=val;
}
*/
void main()
{
	int a[]={15,411,98,586,77,45,85,12,59,36,58,77,121,223,39,1},i,j,n,temp,i1,flag=0;
	static int array_size=1,position;
	n=sizeof(a)/4;		
	printf("no of elements in array\t%d\n",n);
	
	while(array_size!=n)
	{
		//for(i=0;i<=n-1;i++)
		//{
			if(a[array_size]<a[0])
			{
				position=0;
				flag=1;
				
			}
			else if(a[array_size]>=a[array_size-1])
			{	
				//position=array_size;
				flag=0;
				
			}
			else
				for(j=0;j<=array_size-2;j++)
				{	
					if(a[array_size]==a[j])
					{
						position=j;
						flag=1;
						break;
					}
					if(a[array_size]>a[j]&&a[array_size]<a[j+1])		
					{
						position=j+1;
						flag=1;
						break;
						
					}
				}
	
			
		//}
		//insertAtPosition(a[array_size],position,a,n);
		if(flag==1)
		{
			temp=a[array_size];
			for(i1=array_size;i1>position;i1--)
				a[i1]=a[i1-1];
			a[i1]=temp;
			flag=0;
		}
		array_size++;
		
	}
	for(i1=0;i1<=n-1;i1++)
		printf("%d\t",a[i1]);
	printf("\n");
	

	
	
}