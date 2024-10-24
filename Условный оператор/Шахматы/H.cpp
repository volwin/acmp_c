#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1, x2, y1, y2, ans1, ans2;
	cin >> x1 >> y1 >> x2 >> y2;
	ans1 = (x1 + y1) % 2;
	ans2 = (x2 + y2) % 2;
	if(ans1 == ans2){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
