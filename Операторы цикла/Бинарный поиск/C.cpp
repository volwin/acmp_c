#include <bits/stdc++.h>
using namespace std;

int main(){
	long long l = 0, r = 1e9 + 1;
	while(true){
		long long m = (l + r) / 2;
		cout << m << "\n";
		cout.flush();
		char c;
		cin >> c;
		if(c == '>'){
			l = m;
		}
		if(c == '<'){
			r = m;	
		}
		if(c == '='){
			break;
		}
	}
	return 0;
}
