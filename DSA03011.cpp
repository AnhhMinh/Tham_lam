#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int Mod=1000000007;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>>q;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            q.push(x);
        }
        ll ans=0;
        while(q.size()>1){
            ll day1=q.top(); q.pop();
            ll day2=q.top(); q.pop();
            ans=(ans+day1+day2)% Mod;
            q.push(day1+day2);
        }
        cout<<ans<<endl;
    }
}