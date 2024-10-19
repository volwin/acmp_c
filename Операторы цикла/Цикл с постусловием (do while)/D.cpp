#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = -1, x;
	do{
		cin >> x;
		if(x % 2 == 0){
			ans += 1;
		}
	} while(x != 0);
	cout << ans;
	return 0;
}
