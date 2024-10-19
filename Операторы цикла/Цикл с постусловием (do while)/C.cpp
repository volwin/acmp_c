#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	long double k = -1, sum = 0;
	do{
		cin >> x;
		sum += x;
		k += 1;
	} while(x != 0);
	long double ans = sum / k;
	cout << ans;
	return 0;
}
