#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x1, y1, x2, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2;
    y3 = y2 - y1;
    if((y1 == 2 && y2 == 4) && x1 == x2 && y1 != 1){
        cout << "YES";
    }
    else if(y3 == 1 && x1 == x2 && y1 != 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
