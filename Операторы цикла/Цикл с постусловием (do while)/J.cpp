#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, t = -1, k = 1, max = -1;
	do{
		cin >> x;
		if(t == x){
			k += 1;
		}
		if(t != x){
			if(k > max){
				max = k;
			}
			k = 1;
		}
		t = x;
	} while(x != 0);
	cout << max;
	return 0;
}
