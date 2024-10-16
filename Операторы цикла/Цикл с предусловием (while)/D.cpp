#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i = 1;
	cin >> n;
	bool flag = false;
	while(i <= n){
		if(i == n){
			flag = true;
		}
		i *= 2;
	}
	if(flag){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
