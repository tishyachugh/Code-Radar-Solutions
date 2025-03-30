#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Rows
        for (int j = 1; j <= i; j++) {  // Columns
            printf("%d ", (i + j) % 2); // Alternating 1 and 0
        }
        printf("\n"); // Move to next line
    }
    
    return 0;
}
