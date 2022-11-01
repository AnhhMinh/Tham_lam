#include<bits/stdc++.h>
using namespace std;
using ll=long long;
    // phan quay lui
bool check(ll n){
    ll can=cbrt(n)+0.5;
    return can*can*can==n;
}
ll res;
int x[100],n;
string s;
void ql(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n-1){
            ll tmp=0;
            for(int i=0;i<n;i++){
                if(x[i]) tmp=tmp*10+(s[i]-'0');
            }
            if(check(tmp)&& tmp>res) res-tmp;
        }
        else ql(i+1);
    }
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        res=0;
        ql(0);
        if(res==0) cout<<"-1\n";
        else cout<<res<<endl;
    }
}