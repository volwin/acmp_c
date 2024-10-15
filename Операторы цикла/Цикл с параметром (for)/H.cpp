#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ans = 0;
	cin >> n;
	
	if(n >= 1){
		ans = n * (n+1) / 2;
	}
	if(n == 1 or n == 0){
		ans = 1;
	}
	else{
		for(int i = 1; i >= n; i--){
			ans += i;
		}
	}
	cout << ans;
}
