#include <bits/stdc++.h>
using namespace std;

int main(){
	bool flag = false;
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2;
	x3 = abs(x2 - x1);
	y3 = abs(y2 - y1);
	if(x3 == 1 && y3 == 2){
		flag = true;
	}
	else if(x3 == 2 && y3 == 1){
		flag = true;
	}
	if(flag){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
