#include<bits/stdc++.h>
using namespace std;
using ll=long long;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll a[n],b[n];
        for(auto &x: a) cin>>x;
        for(auto &y: b) cin>>y;
        sort(a,a+n);
        sort(b,b+n,greater<ll>());
        ll res=0;
        for(int i=0;i<n;i++) res+=a[i]*b[i];
        cout<<res<<endl;
    } 
}