#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        map<char,int> m;
        for(char x:s) m[x]++;
        int max_fre=0;
        for(auto it:m) max_fre=max(max_fre,it.second);
        int remain=s.size()-max_fre;
        if(max_fre-1<=remain) cout<<"1\n";
        else cout<<"-1\n";
    }
}