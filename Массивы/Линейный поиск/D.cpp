#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[1000];
  int n, max = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int k = n - 2;
  for(int i = 0; i < k; i++){
    int sum = a[i] + a[i + 1] + a[i + 2];
    if(sum > max){
      max = sum;
    }
  }
  int t = a[n-1] + a[n-2] + a[0];
  int t2 = a[n-1] + a[0] + a[1];
  if(t > max){
    max = t;
  }
  if(t2 > max){
    max = t2;
  }
  cout << max;
  return 0;
}
