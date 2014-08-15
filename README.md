##Sorting

### Implementation of Common sorting programs in C

1. Insertion sort (implemented with and without recursion)
2. Bubble sort/generic bubble sort
3. Heap sort
4. Counting sort
5. Mergesort
6. Quicksort
7. Radix sort
8. Selection sort
9. Shaker sort
10. Comb sort
11. Shell sort

### Insertion sort (implemented with and without recursion)
In Insertion sort, we start with the array size of 1 and the element at 2 position is compared with the element at 1 position to find the correct position of the element at 2 position currently. After this the array size is incremented to two and the element at 3 position is compared with the array elements to find it's correct position and it is then INSERTED to it's correct position, and hence the name Insertion sort.Similarly for other elements.


### Bubble sort/generic bubble sort
In bubble sort we compare neighbour to the neighbour element and proceeds from first to last or from last to first so that after each iteration we get the shortest at the first or largest at the last.We continue same way for remaining elements in the array till the subarray size is reduced to 1


### Heap sort
Heapsort is based on the array representation of a heap. A heap has 2 properties 
1-it is a binary tree(atmost 2 child nodes for a node and insertion order is fixed that is left child is inserted first   followed by the right child) 
2-a heap is always either a min or max heap(in a min/max heap a node is always smaller/greater than the child nodes,      however there is no relation among the sibling nodes)

Algorithm:
first of all the array is converted into a maxheap 
the heapsort algorithm is then applied (pg 160 OF COREMAN PDF )--according to this algo, if we swap the root of the max heap(the largest element of the array) with the bottomost rightmost node of the heap ie we swap first element of the maxheap with the last element and reduce the heapsize by one . Now the largest element of the array is at the last the remaining portion of the heap is rearranged to form the max heap again and the procedure is repeated the basic idea is to form a maxheap so as to get the largest element at the top and then put it at the last of array. The remaining elements of the heap are rearranged to form a maxheap again to get the second largest element at the top and this way we continue the process.


### Counting sort
Counting sort is a type of stable sort[if same element occurs in an array, while sorting it makes sure that the element occuring first in the array is placed first in sorted array for eg: if unsorted_array[]={1,44,3,67,5,3} and sorted_array[]={1,2,2,5,44,67} so the 3 at index val 2 and 5 in unsorted array are placed at index val 1 and 2 in sorted respectively.]


### Mergesort
Best expained in Coreman - http://mitpress.mit.edu/books/introduction-algorithms


### Quicksort
The algorithm of quicksort goes like this:
1) The leftmost index of the array is taken as left variable and right for the rightmost variable.
2) I have taken the center index of the array as the pivot value (the starting and the ending values can also be taken as pivots)
3) The idea is to divide the array into two subsets such as the left part of array contains the values less than pivot value and values on the right subset contains the values greater than the pivot value.

4) After the above step of partitioning, recursion is used to call the subarrays is the same way by quicksort()


//consider the example :
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

as left == right return pivot(=2 (index of value 2)) and so on the subarrays are carried on with sorting


### Radixsort
Radix Sort is simple to understand (but tricky to implement). Here we convert the array elements into their binary the elements are sorted first according to their MSB then second MSB and so on till the array is sorted. It is easier to implement with recursion.


### Selection sort
In Selection sort, we compare first element of array with every other element and swap if required so that after first iteration, shortest number is at first index,similarly for second,third and other indexes of the array on other iterations, till the no of elements remaining is 1. We can also move from last index to first (in case of largest selection at each iteration). It is called selection sort as we select the smallest/largest element in one iteration.


### Shaker sort
Shaker sort is a variation to bubble sort. In this approach we first start from left and move towards right like first iteration of bubble sort and we get the largest at last and then we start right to left from the second last element to reach the start till we get the smallest element at the start. In the same way we go till all the elements are sorted/...


### Comb Sort 
Comb Sort is a variation to bubble sort like shell sort is to insertion sort (same in comb sort we sort h-sorted subarrays like in shell sort).



### Shell sort
Shell Sort is a variation to insertion sort.The shell sort first sorts elements situated at h places apart for each element. This is continued and the value of h is decremented till h=1 ie the array is one sorted.
for eg if the array is : 89,78,65,8,99,98,66,32,23(9 elements)
it can be 8 sorted first we get:23,78,65,8,99,98,66,32,89
it can be 2 sorted now(8/3=2) we get:23,8,65,32,66,78,89,98,99

ANOTHER APPROACH (shellsort2.c)
Shell Sort first sorts elements situated at h places apart for each element. This is continued and the value of h is decremented till h=1 ie the array is one sorted.
for eg if the array is : 89,78,65,8,99,98,66,32,23(9 elements)
it can be 8 sorted first we get:23,78,65,8,99,98,66,32,89
it can be 2 sorted now(8/3=2) we get:23,8,65,32,66,78,89,98,99

