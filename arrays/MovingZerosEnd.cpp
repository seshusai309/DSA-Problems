#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
  int j = 0;
  for (int i=0; i<n; i++){
      if (arr[i]!=0){
          if (j<n){
              arr[j] = arr[i];
              j++;
          }
      }
  }
  while(j<n){
      arr[j]=0;
      j++;
  }
  
  for(auto k: arr) cout << k << " ";
  return 0;
}
