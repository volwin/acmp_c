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

unsigned int gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned long long i, j;
    std::cin >> i >> j;
    unsigned long long g = gcd(i, j);
    unsigned int answer = fib_mod(g);
    std::cout << answer;
    return 0;
}
