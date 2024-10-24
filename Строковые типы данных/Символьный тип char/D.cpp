#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 0;
	string s;
	cin >> s;
	for(auto c : s){
		if(c == '0'){
			ans += 1;
		}
	}
	cout << ans;
}
