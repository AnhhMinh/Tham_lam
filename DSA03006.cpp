#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int &x: a) cin>>x;
        vector<int>b(a,a+n);
        sort(begin(b),end(b));
        bool ok=true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] && a[i]!=b[n-i-1]){
                cout<<"No\n"; ok=false; break;
            }
        }
        if(ok) cout<<"yes\n";
    }
}