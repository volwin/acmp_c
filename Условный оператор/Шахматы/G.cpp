#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	char c;
	scanf("%c%d", &c, &y);
	x = c;
	if((x + y) % 2 == 0){
		cout << "BLACK";
	}
	else{
		cout << "WHITE";
	}
}
