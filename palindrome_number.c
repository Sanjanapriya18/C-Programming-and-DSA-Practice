#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if(original == reversed)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");

    return 0;
}