#include <stdio.h> 
 
 int minJumps(int arr[], int n){
        int count;
        int next = arr[0];
        for (int i = 0; i < next; i++)
        {
            next = arr[i];
            if (next > n)
            {
                
            }
            
        }
        
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
    printf("%d\n",minJumps(arr, size));
   return 0;
}
