#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a1, a2, a3, a4, s1, s2, m, l, r, n;
	cin >> a1 >> a2 >> a3 >> a4;
	s1 = min(a1, a2);
	s2 = min(a3, a4);
	n = s1 + s2;
	l = -1;
	r = 2 * 1e9;
	while(l+1 != r){
		m = (l + r) / 2;
		if(m * m <= n){
		l = m;
	}
	else{
		r = m;
	}	
	}
	cout << l;
}
