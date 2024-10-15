#include <iostream>
using namespace std;

int main(){
	int min = 1e6;
	int max = -1;
	for(int i = 0; i < 3; i ++){
		int x;
		cin >> x;
		if(x >= max){
			max = x;
		}
		if(x <= min){
			min = x;
		}
	}
	int ans = max - min;
	cout << ans;
	return 0;
}
