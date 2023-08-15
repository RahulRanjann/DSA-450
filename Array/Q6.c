/*
Input:
5 3
1 2 3 4 5
1 2 3
Output:
5
Explanation:
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
*/

#include <stdio.h>

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

void Arrunion(int *arr1, int n1, int *arr2, int n2)
{
    int size = n1 + n2;
    int newArray[size];
    int j = 0;
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        newArray[i] = arr1[i];
    }

    for (int i = n1; i < n1 + n2; i++)
    {
        newArray[i] = arr2[j];
        j++;
    }

    sort(newArray, size);
  
    for (int i = 1; i <= n1 + n2; i++)
    {
        if (newArray[i] != newArray[i - 1])
        {
            count++;
        }
    }
    
    printf("union :- %d", count);
}

int main()
{
    int n1, n2;
    printf("Enter the size of 1st Array\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of Array1\n");
    for (size_t i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of 2nd Array\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of Array2\n");
    for (size_t i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    Arrunion(arr1, n1, arr2, n2);

    return 0;
}
