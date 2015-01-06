#!/usr/bin/env nodejs

function prime(n)
{
    var table = [ false, false ], count = 0;
    for (var i = 2; i < n; i++) {
        table.push(true);
    }
    for (var i = 2; i < n; i++) {
        if (table[i]) {
            count++;
            for (var j = i * 2; j < n; j += i) {
                table[j] = false;
            }
        }
    }
    return count;
}

process.stdin.once('data', function (val){
    var n = parseInt(val, 10);
    var primes = prime(n);
    console.log(primes);
}).resume();
