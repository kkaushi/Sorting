#include<stdio.h>

void mergesort(int a[],int b[],int size1,int size2)
{
	int	i=0,j=0,k=0, c[100];
	for(k=0;k<size1+size2;k++)
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			i++;
			if(i==size1)
				break;
		}else
		{
			c[k]=b[j];
			j++;
			if(j==size2)
				break;
		}
				
	}	

	if(i==size1)
	{	
		k++;
		for(;k<=size1+size2;k++)
		{
			c[k]=b[j];
			j++;
		}

	}else if(j==size2)
	{
		k++;
		for(;k<=size1+size2;k++)
		{	
			c[k]=a[i];
			i++;
		
		}
		
	}
			
	for(i=0;i<size1+size2;i++)
		printf("%d\n",c[i]);
	printf("\n");
	
	

}

void main()
{
	int a[]={5,41,98,156,159,236,258,277,321,323,339},b[]={15,17,98,186,277,345,385,412,459,536,558,577};	
	int size2=sizeof(b)/4,size1=sizeof(a)/4;//divided by 4 as sizeof(int) is 4 here;
	mergesort(a,b,size1,size2);

}