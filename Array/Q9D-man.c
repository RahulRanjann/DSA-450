/*
    Input: arr[] = {1, 15, 10}, k = 6
    Output:  Maximum difference is 5.
    Explanation: Change 1 to 7, 15 to 9 and 10 to 4. Maximum difference is 5 (between 4 and 9). We can’t get a lower difference.

    Input: arr[] = {1, 5, 15, 10}, k = 3   
O   utput: Maximum difference is 8, arr[] = {4, 8, 12, 7}
*/

#include <stdio.h>

void sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int i = 0; i < size-i-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        
    }
    
}

int max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
void getMinDiff(int *arr, int n, int k)
{
   sort(arr, n); 
    
   int f[100]; 
    int i = 0;
    
    f[0] = arr[0] + k;
    int maxIndex = 0; 
    int minIndex = 0; 
    
    while (i < n) {
        if (arr[i] - k >= arr[i - 1] + k) {
            f[i] = arr[i] - k;
        } else {
            f[i] = arr[i] + k;
        }
        
        if (f[i] > f[maxIndex]) {
            maxIndex = i;
        }
        
        if (f[i] < f[minIndex]) {
            minIndex = i;
        }
        
        i++;
    }
    
    printf("Max Difference: %d\n", f[maxIndex] - f[minIndex]);

   
}
int main() {
    int size;
    printf("Enter size of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of K\n ");
    int k;
    scanf("%d", &k);
    getMinDiff(arr, size, k);
   return 0;
}
