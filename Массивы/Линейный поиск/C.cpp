#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[10000];
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int max2 = a[0];
  int min2 = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] > max2){
      max2 = a[i];
    }
    else if(a[i] < min2){
      min2 = a[i];
    }
  }
  for(int i = 0; i < n; i++){
    if(a[i] == max2){
      a[i] = min2;
    }
  }
  for(int i = 0; i < n; i++){
    cout << a[i] << " ";
  }
}
