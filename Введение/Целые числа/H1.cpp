#include <bits/stdc++.h>
using namespace std;

int main(){
	long long v, t, s, ans;
	cin >> v >> t;
	s = v * t;
	ans = (s % 109 + 110) % 109;
	bool tmp = (ans == 0);
	ans += tmp * 109;
	cout << ans;
}
