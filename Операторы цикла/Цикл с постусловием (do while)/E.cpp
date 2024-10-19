#include <bits/stdc++.h>
using namespace std;

int main(){
	int max = -1, x;
	do{
		cin >> x;
		if(x > max){
			max = x;
		}
	} while(x != 0);
	cout << max;
	return 0;
}
