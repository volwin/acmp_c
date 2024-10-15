#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 0;
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 1 && a[j][i] == 1){
				ans += 1;
			}
		}
	}
	cout << ans / 2;
	return 0;
}
