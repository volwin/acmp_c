#include <bits/stdc++.h>
using namespace std;

int main(){
	float x, y;
	int ans = 1;
	cin >> x >> y;
	while(y - x > 0.01){
		x = x + x * 0.15; 
		ans+=1;
	}
	cout << ans;
	return 0;
}
