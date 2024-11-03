#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b){
    a %= b; 
    swap(a,b);
  }
  return a;
}

int main(){
	int x, y;
	cin >> x >> y;
	cout << (x*y) / gcd(x, y);
	return 0;
}
