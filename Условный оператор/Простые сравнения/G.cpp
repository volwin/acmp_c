#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ans;
	cin >> n;
	if(n % 2 == 0){
		ans = n / 2;
	}
	if(n % 2 == 1){
		ans = n;
	}
	if(n == 1){
		ans = 0;
	}
	cout << ans;
	return 0;
}
