#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

     int t;
     cin>>t;
     while(t--){
          int n, x;
          cin>>n>>x;

          vector<int> stations(n);
          for(int i=0; i<n; i++){
                cin>>stations[i];
          }

          int ans = stations[0];
          // int dist;
          for(int i=1; i<n; i++){
                 ans = max(ans, stations[i]-stations[i-1]);
          }
          ans = max(ans, 2*(x-stations[n-1]));
          cout<<ans<<'\n';
     }
     return 0;
}