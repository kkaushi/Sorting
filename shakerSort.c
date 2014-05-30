//--ShakerSort--:it is a variation to bubble sort
// in this approach we first start from left and move towards right like first iteration of bubble sort and we get 
//the largest at last and then we start right to left from the second last element to reach the start till we get the
//smallest element at the start.
//in the same way we go till all the elements are sorted/...


//it is called so becuse the movement of indexes in the loop gives the impression of shaking 

#include<stdio.h>

void swap(int i,int j,int a[])
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

/*void main()
{
	int a[]={5,4,55,6,38,41,23,5,8},i,j,size,rot=0;
	size=sizeof(a)/4;
	for(i=0;i<size;i++)
	{
		for(j=1;j<=size-i;j++)
		{
			if(a[j-1]>a[j])
				swap(j-1,j,a);
				rot=rot?0:1;
		}
	}

	for(i=0;i<size;i++)
		printf("%d\n",a[i]);

}*/


void main(){

	int a[]={15,411,98,586,77,45,85,12,59,36,58,58,58,58,58,77,121,223,39,16,18,17,18,51,10,1},i,j,size,rot=0,remaining,countleft=0,countright=0;
	size=sizeof(a)/4;
	remaining=size-1;
	while(remaining>0)
	{	
		
		//rotation is left to right
		if(rot==0)
		{
			for(i=countleft;i<size-countright-1;i++)
			{
				if(a[i]>a[i+1])
					swap(i,i+1,a);
				
			}
			countleft++;
			rot=1;
		}	
		//rotation is right to left
		else
		{
			for(i=size-countright-1;i>countleft-1;i--)
			{
				if(a[i]<a[i-1])
					swap(i,i-1,a);
				
			}
			countright++;
			rot=0;
		}	
		
		remaining--;
	}
	//sorted array is
	for(i=0;i<size;i++)
	printf("%d\n",a[i]);

}