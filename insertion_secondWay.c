//--this code implements insertion reverse way--
//ie we start at the last of subarray and we go till we find the position of insertion
//we then move  the elements of array from the inserting position towards right one place 
//then we insert the element at the position
//the subarray size is then incremented by one and so on till the size of subarray equals the size of array// 
#include<stdio.h>

void main()
{
	int a[]={5,4,1,6,7,3,2},i,j;
	int size=sizeof(a)/4,val;
	//we start from the second element
	for(i=1;i<size;i++)
	{
		
		val=a[i];
		j=i;
		//traverse the subarray till we find the location where val[element]>val[position-1]
		while(a[j-1]>val && j-1>=0)
		{
			a[j]=a[j-1];
			j--;
		}
		//inserting the element at the position
		a[j]=val;
	}


	//displaying the sorted array
	for(i=0;i<=size-1;i++)
		printf("%d\t",a[i]);
	
		


	
}