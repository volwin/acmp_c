#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	if(a == b){
		cout << "=";
	}
	if(a > b){
		cout << ">";
	}
	if(a < b){
		cout << "<";
	}
	return 0;
}
