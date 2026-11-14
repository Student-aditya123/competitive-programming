#include<bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin>>t;
       while(t--){
           int n, k;
           cin>>n>>k;
           
           vector<int> a(n);
           for(int &x : a){
                cin>>x;
           }

           bool found = false;
           for(int i=0; i<n; i++){
                 if(a[i] == k){
                        found = true;
                        break;
                 } 
            }
            cout<<(found?"YES":"NO")<<'\n';
       }
    return 0;   
}