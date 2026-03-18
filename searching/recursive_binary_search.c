#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            return binarySearch(arr, mid + 1, high, key);
        else
            return binarySearch(arr, low, mid - 1, key);
    }
    return -1;
}

int main() {
    int arr[100], n, key, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if(result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}