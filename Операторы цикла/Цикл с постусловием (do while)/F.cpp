#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, t = 1e3, ans = 0;
	do{
		cin >> x;
		if(x > t){
			ans += 1;
		}
		t = x;
	} while(x != 0);
	cout << ans;
	return 0;
}
