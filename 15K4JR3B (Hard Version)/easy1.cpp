#include<bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;
       while(t--){
            int n;
            cin>>n;
            vector<int> a(n);
            for(int i=0; i<n; i++){
                 cin>>a[i];
            }
            sort(a.rbegin(), a.rend());

            long long x = 0, y = 0;

            for(int i=0; i<n; i++){
                 long long mov = 1LL << a[i];
                 if(x <= y){
                     x = x + mov;
                 } else{
                     y = y + mov;
                 }
            }
        cout<< x * y << '\n';    
       }
    return 0;   
}