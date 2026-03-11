#include <stdio.h>

int main() {
    int n, i;
    float marks[100], sum = 0, average;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }

    average = sum / n;

    printf("Average marks = %.2f", average);

    return 0;
}