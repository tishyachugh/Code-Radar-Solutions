#include <stdio.h>

int isPrime(int t) {
    if (t < 2)
        return 0;
    for (int i = 2; i * i <= t; i++) {
        if (t % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}