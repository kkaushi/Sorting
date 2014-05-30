#include<iostream>
using namespace std;



template <class t>
void genericBubbleSort(t *arr, int length)
{
	int ctri=0,ctrj=0;
	for(;ctri<length;ctri++)
	{
		for(ctrj=ctri;ctrj<length;ctrj++)
		{
			if(arr[ctri]>arr[ctrj])
			{
				t temp;
				temp=arr[ctri];
				arr[ctri]=arr[ctrj];
				arr[ctrj]=temp;
			}
		}
	}
}


void main()
{
	int intArray[10]={23,34,3,5,35,534,45,77,5,21};
	char charArray[10]={'j','g','c','r','4','b','3','y','a','7'};
	float floatArray[10]={4.4,3.5,6.4,3.2,5.4,6.66,3.65,5.5,6.3,65.3};

	genericBubbleSort(intArray,10);
	genericBubbleSort(charArray,10);
	genericBubbleSort(floatArray,10);
	cout<<"thanks for watching"<<endl;	
}

