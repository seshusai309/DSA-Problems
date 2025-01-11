#include<bits/stdc++.h>
using namespace std;

int checkDuplicates(int arr[], int n){
    int i = 0;
    for (int j=0; j<n-1; j++){
        if (arr[j]!=arr[j+1]){
            arr[i+1] = arr[j+1];
            i++;
        }
    }
    return i+1;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
  cout << checkDuplicates(arr,n)<< endl;
  for (auto k: arr) cout << k << " ";
  return 0;
}
