#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, t, t1 = 0, t2 = 1, ans = 1;
	cin >> n;
	bool flag = false;
	while(true){
		t = t1 + t2;
		if(t == n){
			flag = true;
			break;
		}
		if(t > n){
			break;
		}
		t1 = t2;
		t2 = t;
		ans += 1;
	}
	if(flag){
		cout << 1 << " " << ans + 1;
	}
	else{
		cout << 0;
	}
}
