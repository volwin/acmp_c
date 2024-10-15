#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b, max = -1, ans;
	bool flag = true;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> b;
		if(b == 1 && a > max){
			flag = false;
			max = a;
			ans = i;
		}
	}
	if(flag){
		cout << -1;
	}
	else{
		cout << ans;
	}
}
