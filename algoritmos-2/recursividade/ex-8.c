#include <stdio.h>
#include <stdlib.h>

unsigned long long ackermann(unsigned long long m, unsigned long long n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    unsigned long long m, n;
    
    printf("Enter two non-negative integers m and n: ");
    scanf("%llu %llu", &m, &n);
    
    printf("Ackermann(%llu, %llu) = %llu\n", m, n, ackermann(m, n));
    
    return 0;
}