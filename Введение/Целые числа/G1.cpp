#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, ans1, ans2, ans3;
	cin >> n >> m;
	ans1 = m / n;
	ans2 = m % n;
	ans3 = (n - ans2) % n;
	cout << ans1 << " " << ans2 << " " << ans3;
}
