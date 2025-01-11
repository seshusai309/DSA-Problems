#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int j=i;
        while(arr[j-1]>arr[j] && j>=1){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    return;
}


int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
  insertionSort(arr,n);
  for (auto k: arr) cout << k << " ";
  cout << endl;
  return 0;
}

// 5
// 30 50 40 20 10

// 10 20 30 40 50
