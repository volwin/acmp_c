#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2;
	x3 = abs(x2 - x1);
	y3 = abs(y2 - y1);
	if(x3 == y3){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
