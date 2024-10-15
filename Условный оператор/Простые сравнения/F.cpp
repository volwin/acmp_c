#include <iostream>
using namespace std;

int main(){
	int n, k1, k2, k3, k4;
	cin >> n;
	k1 = n % 10;
	k2 = (n / 10) % 10;
	k3 = (n / 100) % 10;
	k4 = n / 1000;
	if(k1 == k4 and k2 == k3){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
