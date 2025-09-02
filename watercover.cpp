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
        string s;
        cin >> s;
        bool is_continuous = false;
        int empty_cells = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                is_continuous = true;
                break;
            }
            if (s[i] == '.')
            {
                empty_cells++;
            }
        }
        if (is_continuous)
            cout << 2 << endl;
        else
            cout << empty_cells << endl;
    }

    return 0;
}