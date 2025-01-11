#include<bits/stdc++.h>
using namespace std;

int partition(int low, int high, int arr[]){
    int i = low;
    int j = high;
    while (i<j){
        while(arr[i]<=arr[low] && i<high) i++;
        while(arr[j]>arr[low] && j>0) j--;
        if (i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp1 = arr[low];
    arr[low] = arr[j];
    arr[j] = temp1;
    return j;
}

void quick_sort(int low, int high, int arr[]){
    if (low<high){
        int j = partition(low,high,arr);
        quick_sort(low,j-1,arr);
        quick_sort(j+1,high,arr);
    }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin>>arr[i];
  quick_sort(0,n-1, arr);
  for (auto k: arr) cout << k << " ";
  return 0;
}
