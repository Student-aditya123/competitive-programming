#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
      cin>>t; 
      while(t--){
         long long n, k;
         cin>> n >>k;

         string s;
         cin>>s;

         long long ct0 = 0, ct1 =0;
         for(char c : s){
              if(c == '0'){
                  ct0++;
              }else{
                  ct1++;
              }
         }
         if(ct0>ct1){
               long long x = min(k, ct1);
               ct0 = ct0 + x;
               ct1 = ct1 - x;
         }
         else{
             long long x = min(k, ct0);
             ct1 = ct1 + x;
             ct0 = ct0 - x;
         }
         long long ans = 1 + ct0 * (ct0 + 1)/2 + ct1 * (ct1 + 1) /2;
         cout<< ans <<'\n';
      }
    return 0;  
}