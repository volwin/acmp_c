#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	int i = 1;
	while(i * i <= n){
		cout << i * i << " ";
		i += 1;
	}
}
