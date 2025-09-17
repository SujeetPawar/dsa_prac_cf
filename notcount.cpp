#include <bits/stdc++.h>
using namespace std;

bool solve(const string &s, const string &x) {
    if (x.size() < s.size()) return false;
    for (int i = 0; i + s.size() <= x.size(); i++) {
        if (x.substr(i, s.size()) == s) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string cur = x;
        int ans = -1;
        for (int i = 0; i <= 5; i++) { // try at most 5 repetitions
            if (solve(s, cur)) {
                ans = i;
                break;
            }
            cur += x; 
        }

        cout << ans << endl;
    }

    //wrong the answers 
    return 0;
}
