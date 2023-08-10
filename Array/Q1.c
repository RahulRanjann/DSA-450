#include <stdio.h>
void printArray(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d \t",arr[i]);
    }
}
void reverseArray(int *arr, int size)
{
    int temp=0;
    for(int i=0; i<size; i++)
    {   temp = arr[i];
        arr[i]=arr[size];
        arr[size]=temp;
    }
    

}
int main() {
     int n;
    int arr[n];
    printf("Enter the size of Array\n");
    scanf("%d",&n);
    printf("Ente the element of the Array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr, n);
    reverseArray(arr,n);
    printf("\n After reverse the Array\t");
    printArray(arr, n);

    return 0;
}
