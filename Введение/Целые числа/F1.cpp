#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, ans;
	cin >> n >> m;
	ans = (n % m) * (m % n) + 1;
	cout << ans;
}
