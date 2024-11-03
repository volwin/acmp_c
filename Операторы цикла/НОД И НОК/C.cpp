#include <bits/stdc++.h>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned long long n, m, t, ans;
    cin >> n >> m;
    t = gcd(n, m);
    ans = n / t;
    if(m % n == 0){
    	cout << 1;
	}
	else{
		cout << ans;
	}
    return 0;
}

