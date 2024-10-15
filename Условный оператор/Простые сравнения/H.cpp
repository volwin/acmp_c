#include <bits/stdc++.h>
using namespace std;

int main(){
	int max = -1;
	bool flag = true;
	for(int i = 0; i < 3; i++){
		int x;
		cin >> x;
		if(x < 94 || x > 727){
			flag = false;
		}
		if(x >= max){
			max = x;
		}
	}
	if(flag){
		cout << max;
	}
	else{
		cout << "Error";
	}
}
