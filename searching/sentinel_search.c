#include <stdio.h>

int main() {
    int arr[101], n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    arr[n] = key; // Sentinel

    for(i = 0; arr[i] != key; i++);

    if(i < n)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}