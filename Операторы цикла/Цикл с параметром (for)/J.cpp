#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, max1 = 0, k = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(x > 0){
			k += 1;
		}
		if(x <= 0){
			k = 0;
		}
		if(k >= max1){
			max1 = k;
		}
	}
	cout << max1;
	return 0;
}
