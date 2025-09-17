#include <bits/stdc++.h>
using namespace std;

int main() {
        int n; 
        cin>>n; 
        vector<int> temp(n); 
        for(int i = 0; i <n; i++) cin>> temp[i];
        int mini = INT_MAX; 
        for(int i = 0; i < n; i++){
            mini = min(mini , abs(temp[i]));
        }
        cout<<mini<<endl; 
    return 0;
}