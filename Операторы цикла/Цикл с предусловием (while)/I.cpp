#include <bits/stdc++.h>
using namespace std;

int main(){
	int max = -1e5;
	int min = 1e5;
	int k = 1;
	int x;
	while(cin >> x){
		if(k % 2 == 1){
			if(x <= min){
				min = x;
			}
		}
		if(k % 2 == 0){
			if(x >= max){
				max = x;
			}
		}
		k++;
	}
	cout << max + min;
}
