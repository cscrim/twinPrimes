#include <stdio.h>

int IsPrime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int largest_twin = 0;
    int num_twins = 0;
    int N = 3000; 

    for (int p = 3; p < N; p++) {
      
        if (IsPrime(p) && (IsPrime(p - 2) || IsPrime(p + 2))) {
            num_twins++; 
            largest_twin = p;
        }
    }

    printf("There are %d twin-primes less than %d \n", num_twins, N);
    printf("The largest twin prime less than %d is %d\n", N, largest_twin);

    return 0;
}
