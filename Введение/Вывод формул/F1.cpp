#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, a, b, t = 0, k = 0;
	cin >> h >> a >> b;
	while(true){
		t += a;
		if(t >= h){
			break;
		}
		t -= b;
		k += 1;
	}
	cout << k + 1;
	return 0;
}
