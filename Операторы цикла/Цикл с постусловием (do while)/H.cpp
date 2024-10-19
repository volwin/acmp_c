#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a(100);
	int max = -1, x, ans = 0;
	do{
		cin >> x;
		a.push_back(x);
		if(x > max){
			max = x;
		}
	} while(x != 0);
	for(int i = 0; i < a.size(); i++){
		if(a[i] == max){
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}
