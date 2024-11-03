#include <iostream>
unsigned int fib_mod(unsigned long long n) {
    unsigned int f0 = 0;
    unsigned int f1 = 1;
    unsigned int ans;
    for (unsigned long long i = 2; i <= n; ++i) {
        ans = (f0 + f1) % 1000000000;
        f0 = f1;
        f1 = ans;
    }
    return f1;
}

unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned long long i, j;
    std::cin >> i >> j;
    unsigned int fi = fib_mod(i);
    unsigned int fj = fib_mod(j);
    unsigned int answer = gcd(fi, fj);
    std::cout << answer;
    return 0;
}

