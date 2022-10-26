//Write a program for insertion sort. Compare the best case, worst case and average case for different values of n.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of the array: \n");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements of the Array:\n");
	
	for(int i=0;i<n;i++)
	{
	    scanf("%d", &arr[i]);	
	}
	//Insertion Sort
	int key,j;
	for(int i=1;i<n;i++)
	{
        key = arr[i];
        j = i - 1;
       //Move elements of array, that are greater than key, to one position ahead of their current position 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

	// Array after Sorting
	for(int i=0;i<n;i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}
