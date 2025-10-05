#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = 0;
        while (x > 9)
        {
            x /= 10;
            ans += 9;
        }
        cout << ans + x << endl;
    }

    return 0;
}