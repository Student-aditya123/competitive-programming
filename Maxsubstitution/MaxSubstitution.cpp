#include<bits/stdc++.h>
using namespace std;

const long long M = 10e9 + 7;
long long modpow(long long a, long long b){
       long long res = 1;
       while(b>0){
           if(b&1){
            res = res * a % M;
           }
           a = a * a % M; 
           b = b/2;
       }
       return res;
}
int main(){
     int t;
     cin>>t;

     while(t--){
         int n;
         cin>>n;
         vector<long long> v(n);
         for(int i=0; i<n; i++){
              cin>>v[i];
         }

         sort(v.rbegin(), v.rend());
         long long ans = 1;
        //  long long pref = 1;

         int len = 0;

         while(len<n){
              if(len +1 < n && v[len] == v[len+1]){
                    break;
              }
              len++;
         }
         if(len>=1){
             ans = (ans + v[0]-1) % M;
         }
         for(int i=1; i<len; i++){
             long long x = v[i]-1;
            //  pref = (pref * x) % M;
             ans = (ans+ modpow(x, i +1)) % M;
         }
         cout<< ans << '\n';
     }
    return 0;  
}