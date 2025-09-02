#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> stops;
        stops.push_back(0);
        for (int i = 0; i < n; i++)
        {
            long long point;
            cin >> point;
            stops.push_back(point);
        }
        stops.push_back(x);
        n = stops.size();

        long long max_distance = INT_MIN;

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                max_distance = max(max_distance, 2 * (stops[i] - stops[i - 1]));
            else
                max_distance = max(max_distance, (stops[i] - stops[i - 1]));
        }
        cout << max_distance << endl;
    }

    return 0;
}