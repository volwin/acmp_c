#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	bool flag = false;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 != x2 && y1 == y2){
		flag = true;
	}
	else if(x1 == x2 && y1 != y2){
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
