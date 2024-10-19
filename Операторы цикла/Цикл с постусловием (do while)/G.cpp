#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, max1 = -1, max2 = -1;
	do{
		cin >> x;
		if(x >= max1){
			max2 = max1;
			max1 = x;
		}
		else if(x >= max2){
			max2 = x;
		}
	} while(x != 0);
	cout << max2;
}
