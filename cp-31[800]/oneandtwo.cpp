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
        int total_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
                total_cnt++;
        }
        if (total_cnt % 2 == 1)
            cout << -1 << endl;
        else
        {
            int cc = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                    cc++;
                if (cc == total_cnt / 2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}