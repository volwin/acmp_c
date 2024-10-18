#include <bits/stdc++.h>
using namespace std;

int main(){
	double x1, y1, x2, y2, ans, t1, t2;
	cin >> x1 >> y1 >> x2 >> y2;
	t1 = (x2 - x1) * (x2 - x1);
	t2 = (y2 - y1) * (y2 - y1);
	ans = sqrt(t1 + t2);
	cout << setprecision(12) << ans;
	return 0;
}
