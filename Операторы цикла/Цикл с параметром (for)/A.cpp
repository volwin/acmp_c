#include <iostream>
using namespace std;

int main(){
	int n, k1 = 0, k2 = 0, x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x == 1){
			k1 += 1;
		}
		else{
			k2 += 1;
		}
	}
	cout << min(k1, k2);
}
