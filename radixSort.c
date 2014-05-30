//--Radix Sort:--radix sort is simple to understand (but difficult to implement)
//--here we convert the array elements into their binary
//--the elements are sorted first according to their MSB then second MSB and so on till the array is sorted
//--it is easier to implement with recursion 



#include<stdio.h>
#include<math.h>

//4 bits so maximum value can be 15 in the main array
struct num
{
	int bits[4];
};


//this method converts int to binary and return the structure
struct num inttobits(int n)
{
	
	struct num number;
	int i,bit=3,n1;
	n1=n;
	
	for(i=0;i<=3;i++)
	{
		number.bits[i]=n1%2;
		n1=n1/2;

	}
	return number;
}



//it converts a binary structure into an int
int * binaryToint(struct num number)
{
	int i,num=0;
	for(i=0;i<=3;i++)
	{
		num+=pow(2,i)*number.bits[i];
	}
	return num;
}


//this method implements radix sort using recursion
void sortbyBit(struct num arr[],int b,int size,int begin,int end)
{
	int j,i,val,flag=0;
	struct num val1;
	
	
	if(size==1)
	{	
		//this printf if required in the case of single element in the array
		printf("\nsorted array after sorting bit %d is\n",b);
		for(i=begin;i<=end;i++)
		{ 
			//to print the bit order
			printf("\n%d%d%d%d\n",arr[i].bits[3],arr[i].bits[2],arr[i].bits[1],arr[i].bits[0]);
		}
		return;
	}


	//simple insertion sort
	for(i=begin+1;i<=end;i++)
	{
		val=arr[i].bits[b];
		val1=arr[i];
		j=i;
		
		//traverse the subarray till we find the location where val[element]>val[position-1]
		while(arr[j-1].bits[b]>val && j-1>=begin)
		{
			arr[j]=arr[j-1];
			j--;
		}
		//inserting the element at the position
		arr[j]=val1;
	}
	
	
	printf("\nsorted array after sorting bit %d is\n",b);
	for(i=begin;i<=end;i++)
	{ 
		printf("\n%d%d%d%d\n",arr[i].bits[3],arr[i].bits[2],arr[i].bits[1],arr[i].bits[0]);
	}

	for(i=begin;i<end;i++)
		if(arr[i].bits[b]<arr[i+1].bits[b])
		{	
			//flag==1 when the sorted bits consists of both 0 and 1 
			//so we need to partition the array into two parts so that while sorting according the next MSB the sorted sequence
			//may become unsorted
			flag=1;
			break;
		}
	if(flag==1)
	{
		
		if(b>=1)
		{
			sortbyBit(arr,b-1,i-begin+1,begin,i);
			sortbyBit(arr,b-1,end-i,i+1,end);
		}
		else 
			return;
	}
	else if(flag==0 )
		if(b-1>=0)
			//if all bits are same (ie either 0 or 1)
			sortbyBit(arr,b-1,size,begin,end);
		else 
			return;
	
	//for(i=0;i<=size-1;i++)
	//	printf("\n%d\n",arr[i].bits[b]);
}

void main()
{
	int i,number,size;
	struct num arr[11];
	int a[]={10,8,9,5,7,6,4,15,7,8,9};
	size=sizeof(a)/4;
	for(i=0;i<size;i++)
		arr[i]=inttobits(a[i]);
	
	
	//arr,bit,size,beg,end
	sortbyBit(arr,3,size,0,size-1);
	
		
		
	printf("\n\nfinal sorted array is\n\n");
	for(i=0;i<=size-1;i++)
	{ 
		number=binaryToint(arr[i]);
		printf("\n%d\n",number);
		//printf("\n%d%d%d%d\n",arr[i].bits[3],arr[i].bits[2],arr[i].bits[1],arr[i].bits[0]);
	}
	
	




	
}