#include <bits/stdc++.h>
using namespace std;

// k is length of subarray to sort....
int main() {
    // Fast I/O (Always include this inside main)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> boxes(n);
        for(int &x : boxes) {
            cin >> x;
        }
        
        if(k == 1) {
            if(is_sorted(boxes.begin(), boxes.end())) {
                cout << "YES\n"; // Changed endl to \n
            } else {
                cout << "NO\n";  // Changed endl to \n
            }  
        } else {
            cout << "YES\n";     // Changed endl to \n
        }
    }
    return 0;  
}