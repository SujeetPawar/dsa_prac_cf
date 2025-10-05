#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t; 
    while(t--){
        int n; 
        cin>>n; 
        vector<int> less(n-1); 
        for(int i = 0; i < n - 1; i++) cin>> less[i];
        int ans = 0; 
        for(int i =  0; i < n-1; i++) ans += less[i];
        cout<< 0 - (ans) <<endl; 
    }
    return 0;
}