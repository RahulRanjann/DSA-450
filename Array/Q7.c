/*
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/
#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}

void rotate(int *arr, int size)
{
    int j = size-2;
    int temp;
    for (int i = size-1 ; i >=0; i--)
    {
        if (j<0)
        {
          break;
        }
        
        temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        j--;
    }
    printArray(arr, size);
}

int main() {

   int size;
   printf("Enter size of Array\n");
   scanf("%d",&size);
   int arr[size];
   printf("Enter elements of array\n");
   for (int i = 0; i < size; i++)
   {
    scanf("%d",&arr[i]);
   }
   rotate(arr, size);
   
   return 0;
}
