#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int max1 = max(max(a, b), max(b, c));
	int min1 = min(min(a,b), min(b,c));
	int sr1 = (a + b + c) - max1 - min1;
	int max2 = max(max(d, e), max(e, f));
	int min2 = min(min(d, e), min(e, f));
	int sr2 = (d + e + f) - max2 - min2;
	int ans = max1 * max2 + sr1 * sr2 + min1 *min2;
	cout << ans;
}
