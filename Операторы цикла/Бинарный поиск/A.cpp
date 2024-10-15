#include<bits/stdc++.h>
#include <stdint.h>
using namespace std;
 
int main() {
    uint64_t n, x = 1, ans = 0; 
	cin >> n;
    while (x < n) {
        ans ++;
        x *= 2;
    }
    cout << ans;
}
