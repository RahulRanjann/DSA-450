/*
    Input:
    N = 6
    A[] = {3, 2, 1, 56, 10000, 167}
    Output: 1 10000
    Explanation: minimum and maximum elements of array are 1 and 10000.
*/


#include <stdio.h>

void printArray(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d \t",arr[i]);
    }
}
void findMinMax(int *arr, int size)
{
    int min=arr[0], max=arr[0];
    for (int i= 0; i < size; i++)
    {
        if (min > arr[i])
        {
            
           min = arr[i];
        
        }
        else if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Min = %d\nMax = %d",min, max);
    
}
int main() {

   int n;
   int arr[n];
   printf("Enter the size of Array\n");
   scanf("%d",&n);
   printf("Enter the element of Array\n");
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   printArray(arr, n);
   findMinMax(arr, n);
   return 0;
}
