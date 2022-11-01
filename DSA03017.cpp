#include<bits/stdc++.h>
using namespace std;
main(){
    int  t; cin>>t;
    while(t--){
        int k; cin>>k;
        string s; cin>>s;
        map<char,int> m;
        for(char x: s) m[x]++;
        priority_queue<int> q;
        for(auto it:m) q.push(it.second);
        while(k--){
            int tmp=q.top();
            q.pop();
            tmp--;
            q.push(max(tmp,0));
        }
        long long ans=0;
        while(!q.empty()){
            ans+=q.top()*q.top();
            q.pop();
        }
        cout<<ans<<endl;
    }
}