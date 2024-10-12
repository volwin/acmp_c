#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, ans;
	cin >> n;
	n = n / 10;
	ans = n*(n+1) * 100 + 25;
	cout << ans;
}
