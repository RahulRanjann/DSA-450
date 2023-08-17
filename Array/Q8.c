/*
Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which
is a contiguous subarray.
*/
#include <stdio.h>
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
void maxSubarraySum(int *arr, int size)
{
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < size; i++)
    {
        sum = max(arr[i], sum+arr[i]);
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }
     printf("maxsub Array sum is %d\n",maxi);
}
int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxSubarraySum(arr, size);
   
    return 0;
}
