
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string X, S;
    cin >> X >> S;

    int cnt = 0;

    // Keep doubling until X is long enough
    while (X.size() < S.size()) {
        X += X;
        cnt++;

        if (X.find(S) != string::npos) {
            cout << cnt << '\n';
            return;
        }
    }

    // Check the current string
    if (X.find(S) != string::npos) {
        cout << cnt << '\n';
        return;
    }

    // One additional operation
    X += X;
    cnt++;

    if (X.find(S) != string::npos) {
        cout << cnt << '\n';
    }
    else {
        cout << -1 << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
