#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, p, y, ans = 0;
    cin >> x >> p >> y;
    x *= 100;
    y *= 100;
    while (x < y) {
        x += x * p / 100;
        ans++;
    }
    cout << ans;
}
