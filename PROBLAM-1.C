// WRITE A PROGRAM TO PRINT FIBONNACI SERIES UP TO N TERM.

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}