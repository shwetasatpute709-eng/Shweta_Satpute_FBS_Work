#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square: ");
    scanf("%d", &n);  // e.g. 4

    // Outer loop for rows
    for (i = 0; i < n; i++) {
        // Inner loop for columns
        for (j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n"); // new line after each row
    }

    return 0;
}
