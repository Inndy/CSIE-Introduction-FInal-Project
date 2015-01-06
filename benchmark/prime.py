#!/usr/bin/env python3

def prime(n):
    table = [ False, False ] + [ True ] * (n - 2)
    count = 0

    for v, is_prime in enumerate(table):
        if is_prime:
            count += 1
            for j in range(v * 2, n, v):
                table[j] = False

    return count

primes = prime(int(input()))
print(primes)
