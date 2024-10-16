#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, max = -1e4, ans, l, r;
	cin >> n;
	vector<int> a(n+1);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cin >> l >> r;
	for(int i = l; i <= r; i++){
		if(a[i] > max){
			max = a[i];
			ans = i;
		}
	}
	cout << max << " " << ans;
	return 0;
}
