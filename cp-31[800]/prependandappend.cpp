#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>> t; 
    while (t--)
    {
        int n; 
        cin>>n; 
        string s; 
        cin>> s; 
        int l =0 , r = n - 1; 
        int temp = n; 
        while(l <= r){
            if(s[l] != s[r])
                temp = temp - 2; 
            else break;
            l++; 
            r--; 
        }
        cout<< temp << endl; 
    }
    
    return 0;
}