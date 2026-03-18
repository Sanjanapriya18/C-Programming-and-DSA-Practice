#include <stdio.h>

int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high && key >= arr[low] && key <= arr[high]) {
        int pos = low + ((key - arr[low]) * (high - low)) /
                          (arr[high] - arr[low]);

        if(arr[pos] == key)
            return pos;

        if(arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
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

    result = interpolationSearch(arr, n, key);

    if(result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}