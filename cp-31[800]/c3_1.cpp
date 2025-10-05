#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long int P = a * b;

        if (P % 2 == 1) {
            cout << (long long)(P + 1) << "\n";
        } else if ((P / 2) % 2 == 1) {
            cout << -1 << "\n";
        } else if (b % 2 == 1) {
            cout << -1 << "\n";
        } else {
            cout << (long long)(P / 2 + 2) << "\n";
        }
    }
    return 0;
}
