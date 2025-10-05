#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<vector<int>> buckets(3);
        for (int i = 1; i <= n; i++) {
            buckets[i % 3].push_back(i);
        }

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int need = (3 - (p[i] % 3)) % 3;

            if (!buckets[need].empty()) {
                q[i] = buckets[need].back();
                buckets[need].pop_back();
            } else {

                for (int r = 0; r < 3; r++) {
                    if (!buckets[r].empty()) {
                        q[i] = buckets[r].back();
                        buckets[r].pop_back();
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) cout << q[i] << " ";
        cout << "\n";
    }
    return 0;
}


// wrong answer     
