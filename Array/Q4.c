#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}

void sort012(int *arr, int size)
{
    int l =0;
    int m =0;
    int h =size-1;
    int temp;
    while (m <= h)
    {
        if (arr[m]==1)
        {
            m++;
        }
        else if (arr[m]==0)
        {
            temp = arr[m];
            arr[m] = arr[l];
            arr[l] = temp;
            m++;
            l++;
        }
        else
        {
            temp = arr[h];
            arr[h] = arr[m];
            arr[m] = temp;
            h--;
        }
    }
    
    
}
int main() {
   int n;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   int arr[n];
   printf("Enter elements of array\n");
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   sort012(arr, n);
   printArray(arr, n);
   
   return 0;
}
