#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, k = 0, ans = 0, t;
	do{
		cin >> x;
		ans += x;
		if(x == 0 && t == 0){
			k += 1;
		}
		t = x;
	} while(k != 1);
	cout << ans;
}
