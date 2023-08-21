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
    int tempMax, tempMin, ans;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]-k < 0)
        {
            continue;
        }
        tempMin = min(arr[0]+k, arr[i]-k);
        tempMax = max(arr[i-1]+k, arr[n-1]-k);
        ans = min(ans,tempMax-tempMin);
        
        
    }
    printf("%d-%d = %d",arr[0],arr[n-1],(arr[0]-arr[n-1]));
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
