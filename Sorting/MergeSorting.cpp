#include<bits/stdc++.h>
using namespace std;

void merge(int left, int mid, int right, int arr[]){
    int i = left;
    int j = mid+1;
    int k = 0;
    int n = (right-left+1);
    int new_arr[n];
    
    while(i<=mid && j<=right){
        if (arr[i] < arr[j]){
            new_arr[k]=arr[i];
            k++;
            i++;
        }else{
            new_arr[k]=arr[j];
            k++;
            j++;
        }
    }
    
    while(j<=right){
        new_arr[k]=arr[j];
        k++;
        j++;
    }
    
    while(i<=mid){
        new_arr[k]=arr[i];
        k++;
        i++;
    }
    
    for (int c=0; c<n; c++)  arr[left+c] = new_arr[c];
}

void merge_sort(int left, int right, int arr[]){
    
    if (left == right) return;
    
    int mid = (left+right) / 2;
    merge_sort(left, mid, arr);
    merge_sort(mid+1, right, arr);
    
    merge(left,mid,right,arr);
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for (int i=0; i<n; i++) cin>>arr[i];
  merge_sort(0,n-1,arr);
  for (auto k: arr) {
      cout << k << " ";
  }
  return 0;
}
