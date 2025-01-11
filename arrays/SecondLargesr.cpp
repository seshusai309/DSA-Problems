#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
  int max = arr[0];
  int secondlargest = -1;
  for (int i=0; i<n; i++){
      if (arr[i]>max) {
          secondlargest = max;
          max = arr[i];
      }
      if (arr[i] > secondlargest && arr[i]!=max) {
          secondlargest = arr[i];
      }
  }
  cout<<secondlargest<<" ";
  return 0;
}