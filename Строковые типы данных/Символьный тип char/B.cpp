#include <bits/stdc++.h>
using namespace std;

int main(){
	char c;
	cin >> c;
	if(c >= 'a' && c <= 'z'){
		c = toupper(c);
	}
	cout << c;
}

