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
           int n;
           string s;
           cin>>n>>s;
           
           int cnt = 0;
           bool found = false;

           for(int i=0; i<n; i++){
               if(s[i] == '.'){
                   cnt++;
                }
                else{
                      cnt = 0;
                }
                if(cnt == 3){
                    found = true;
                    break;
                }
           }
           if(found){
              cout<<2<<'\n';
           }
           else{
               int ans = 0;
               for(int i=0; i<n; i++){
                     if(s[i]=='.'){
                          ans++;
                     }

               }
               cout<<ans<<'\n';
           }
       }
    return 0;   
}