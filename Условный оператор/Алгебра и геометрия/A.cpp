#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, max1, min1, t; 
	cin >> a >> b >> c;
	if(a + b == c){
		cout << "YES";
		goto EXIT;
	}
	if(a + c == b){
		cout << "YES";
		goto EXIT;
	}
	if(b + c == a){
		cout << "YES";
		goto EXIT;
	}
	else{
		cout << "NO";
		goto EXIT;
	}
EXIT:
	return 0;
}
