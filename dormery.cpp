#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> number(n);
        for (int i = 0; i < n; i++)
        {
            cin >> number[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[number[i]]++;
        }
        if (mp.size() > 2)
            cout << "No" << endl;
        else
        {
            int a = mp.begin()->second;
            int b = mp.rbegin()->second;

            if (a == b)
                cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(a - b) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}