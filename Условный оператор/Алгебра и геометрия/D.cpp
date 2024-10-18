#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1, y1, r1, x2, y2, r2, t1, t2;
	double d;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	t1 = (x2 - x1) * (x2 - x1);
	t2 = (y2 - y1) * (y2 - y1);
	d = sqrt(t1 + t2);
	if(d <= r1 + r2 && d >= r1 - r2 && d >= r2 - r1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
