/*
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given
array is 7.
*/
#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}
void sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findKth(int *arr, int k)
{
    printf("%dth smallest element of the array is %d\n",k, arr[k-1]);
}

int main()
{
    int n, k;
    int arr[n];
    printf("Enter size of Array\n");
    scanf("%d", &n);
    printf("Enter the kth value to find the kth smallest element in array");
    scanf("%d", &k);
    printf("Enter element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    findKth(arr, k);
    return 0;
}
