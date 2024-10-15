#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, ans;
	cin >> n;
	bool flag = true;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if(x <= 437){
			flag = false;
			ans = i;
			break; 
		}
	}
	if(flag){
		cout << "No crash";
	}
	else{
		cout << "Crash " << ans; 
	}
	return 0;
}
