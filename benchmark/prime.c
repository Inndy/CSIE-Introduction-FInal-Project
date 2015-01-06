#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int prime(int n, bool *table)
{
    int i, j, count = 0;
    table[0] = table[1] = false;

    for (i = 2; i < n; i++) {
        table[i] = true;
    }

    for (i = 2; i < n; i++) {
        if (table[i]) {
            count++;
            for (j = i * 2; j < n; j += i) {
                table[j] = false;
            }
        }
    }

    return count;
}

int main ()
{
    int n, count;
    scanf("%d", &n);

    bool *primes = (bool *)malloc(sizeof(bool) * n);
    count = prime(n, primes);
    printf("%d\n", count);
    free(primes);
    return 0;
}
