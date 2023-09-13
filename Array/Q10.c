#include <stdio.h> 
#include<maths.h>
 
 int minJumps(int arr[], int n){
    int jump = 0;
    int pos = 0;
    int des = 0;
    for(int i =0; i < n; i++)
    {
        des = fmax(des,arr[i]+i);
        if(pos == i)
        {
            pos = des;
            jump ++;

        }
    }
    return jump
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
