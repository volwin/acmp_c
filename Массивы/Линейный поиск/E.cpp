#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[1000];
  int n, x, flag = 1e5;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  cin >> x;
  int ans;
  for(int i = 1; i <= n; i++){
    int t = abs(a[i] - x);
    if(t < flag){
      flag = t;
      ans = a[i];
    }
    if(t == flag){
      ans = min(ans, a[i]);
    }
  }
  cout << ans;
}
