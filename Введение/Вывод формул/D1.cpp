#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1, b1, c1, a2, b2, c2, ans;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2; 
	ans = (a2 - a1) * 3600 + (b2 - b1) * 60 + (c2 - c1);
	cout << ans;
	return 0;
}
