#include<bits/stdc++.h>
using namespace std;
const int Mod=1000000007;
using ll= long long;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        ll res=0;
        for(int i=0;i<n;i++){
            res+= 1ll*i*a[i];
            res %= Mod;
        }
        cout<<res<<endl;
    }
}