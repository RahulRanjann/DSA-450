/*
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5
*/

#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}
void moveNegative(int *arr, int size)
{
    int count= 0;
    int newArr[size];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            newArr[count] = arr[i];
            count++;
        
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i]<0)
        {
            newArr[count] = arr[i];
            count++;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = newArr[i];
    }
    
    printArray(arr, size);

      
}

int main() {
   int n;
   printf("Enter size of array\n");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the element of array \n");
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   moveNegative(arr, n);
   
   return 0;
}
