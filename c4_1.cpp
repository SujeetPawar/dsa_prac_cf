#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[b[i]].push_back(i);
        }

        vector<int> a(n, -1);
        int curVal = 1;

        bool possible = true;
        for (auto &g : groups) {
            int freq = g.first;
            auto &idx = g.second;
            if ((int)idx.size() != freq) {
                possible = false;
                break;
            }
            for (int pos : idx) a[pos] = curVal;
            curVal++;
        }

        if (!possible) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
