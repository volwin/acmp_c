#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, ans = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> x;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			ans += 1;
		}
	}
	cout << ans;
}
