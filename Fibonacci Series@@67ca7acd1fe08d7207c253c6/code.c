#include <stdio.h>

void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);

    for (int i = 2; i < n; i++) {  
        next = a + b;
        printf("%d ", next);
        a = b;  // Update values
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Number should be at least 1.\n");
    } else if (n == 1) {
        printf("Fibonacci Series: 0\n");
    } else {
        fibonacci_iterative(n);
    }
    
    return 0;
}
