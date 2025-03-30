#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;  // 2 is the only even prime
    if (num % 2 == 0) return 0;  // Exclude other even numbers

    for (int i = 3; i * i <= num; i += 2) { // Check odd numbers only
        if (num % i == 0) return 0;
    }
    return 1;
}
