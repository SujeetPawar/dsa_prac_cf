#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while (t--)
    {
        int n , k; 
        cin>>n >> k; 
        vector<int> temp(n); 
        for(int i = 0; i < n; i++) cin>> temp[i]; 
        bool present = false; 
        for(int i = 0;  i < n; i++){
            if(temp[i] == k){
                present = true;
                break;
            }
        }
        if(present) cout<<"YES"<<endl; 
        else cout<<"NO" <<endl;
        
    }
    
    return 0;
}