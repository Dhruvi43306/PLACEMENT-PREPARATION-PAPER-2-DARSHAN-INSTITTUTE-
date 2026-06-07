// WRITE A PROGRAM TO REMOVE DUPLICATE NUMBERS FROM AN ARRAY.

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array after removing duplicates:\n");

    for (int i = 0; i < n; i++) {
        int duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}