#include <bits/stdc++.h>
using namespace std;

int main(){
	int k1 = 0;
	int k2 = 0;
	for(int i = 0; i < 4; i++){
		int x, y;
		cin >> x >> y;
		k1 += x;
		k2 += y;	
	}
	if(k1 > k2){
		cout << 1;
	}
	if(k1 < k2){
		cout << 2;
	}
	if(k1 == k2){
		cout << "DRAW";
	}
}
