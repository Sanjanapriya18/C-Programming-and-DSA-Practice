#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    largest = second = -99999;

    for(i=0;i<n;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    printf("Second largest element = %d",second);

    return 0;
}