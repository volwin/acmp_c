#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, ans;
	cin >> a >> b;
	ans = (a%abs(b) + abs(b)) % abs(b);
	cout << ans;
	return 0;
}
