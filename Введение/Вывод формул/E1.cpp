#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, h, m, tmp;
	int tmp2 = 0;
	cin >> n;
	int tmp3 = n;
	while(tmp3 != 0){
		if(tmp3 % 2 == 0){
			tmp2+=15;
		}
		else{
			tmp2 += 5;
		}
		tmp3 -= 1;
	}
	tmp = 540 + n * 45 + tmp2;
	if(n % 2 == 0){
		tmp -= 15;
	}
	else{
		tmp-=5;
	}
	m = tmp % 60;
	h = tmp / 60;
	cout << h << " " << m;
	return 0;
}
