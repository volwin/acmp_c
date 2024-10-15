#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, m, n, d;
	cin >> x;
	vector<int> a(x);
	for(int i = 0; i < x; i++){
		cin >> n >> m;
		d = 19 * m + (n + 239)*(n+366) / 2;
		cout << d << "\n";
	}
}
