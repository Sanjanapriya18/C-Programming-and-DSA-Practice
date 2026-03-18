#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);
    int prev = 0;

    while(arr[(step < n ? step : n) - 1] < key) {
        prev = step;
        step += sqrt(n);
        if(prev >= n)
            return -1;
    }

    while(arr[prev] < key) {
        prev++;
        if(prev == (step < n ? step : n))
            return -1;
    }

    if(arr[prev] == key)
        return prev;

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

    result = jumpSearch(arr, n, key);

    if(result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}