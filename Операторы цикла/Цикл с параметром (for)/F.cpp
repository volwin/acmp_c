#include <bits/stdc++.h>
using namespace std;

int main(){
	int s, p;
	cin >> s >> p;
	for(int i = 1; i <= 1e3; i++){
		for(int j = 1; j<= 1e3; j++){
			if(i + j == s && i*j == p){
				cout << min(i, j) << " " << max(i, j);
				goto EXIT;
			}
		}
	}
EXIT:
	return 0;
}
