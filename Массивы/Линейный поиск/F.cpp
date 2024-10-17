#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ans;
	cin >> n;
	vector<int> a(n + 1);
	vector<int> b(n + 1);
	double max = -1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	for(int i = 1; i <= n; i++){
		int x = a[i] * b[i];
		if(x > max){
			max = x;
			ans = i;
		}
	}
	cout << ans;
	return 0;
}
