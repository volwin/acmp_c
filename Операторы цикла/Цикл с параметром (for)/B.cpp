#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	int max1 = -1;
	int min1 = 1e6;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x >= max1){
			max1 = x;
		}
		if(x <= min1){
			min1 = x;
		}
	}
	cout << min1 << " " << max1;
}
