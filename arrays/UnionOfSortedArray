#include <bits/stdc++.h>
using namespace std;
vector<int> get_union(vector<int> a, vector<int> b){
    int i = 0, j = 0;
    vector<int> ans;
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            if(ans.empty() || a[i] != ans.back()){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || b[j] != ans.back()){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(j < b.size()){
        if(ans.empty() || b[j] != ans.back()){
            ans.push_back(b[j]);
        }
        j++;
    }
    while(i < a.size()){
        if(ans.empty() || a[i] != ans.back()){
            ans.push_back(a[i]);
        }
        i++;
    }
    return ans;
}
int main() {
    int m,n;
    cin >> m >> n;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    vector<int> ans = get_union(a,b);
    for (auto k:ans) cout << k << " ";
    return 0;
}
