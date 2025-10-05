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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                k++;
            else
                l++;
        }
        int ops = 0;
        while (k < l || l % 2 == 1)
        {
            ops++;
            k++;
            l--;
        }
        cout << ops << endl;
    }

    return 0;
}