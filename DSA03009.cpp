#include<bits/stdc++.h>
using namespace std;
struct job{
    int id;
    int deadline;
    int profit;
};
bool cmp(job a,job b){
    return a.profit>b.profit;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        job a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].id>>a[i].deadline>>a[i].profit;
        }
        sort(a,a+n,cmp);
        bool used[n];
        memset(used,false,sizeof(used));
        int mark[n],sum=0;
        // duyet tung job va chon job co profit cao nhat
        for(int i=0;i<=n-1;i++){
            // doi voi moi job thu i
            // xet cac moc thoi gian tu deadline-1 ->0
            for(int j=a[i].deadline-1;j>=0;j--){
                if(used[j]==false){ // moc tgian j chua dc sdung
                    used[j]=true;
                    mark[j]=i; // cviec thu i dc thuc hien o moc tgian j
                    sum+=a[i].profit;
                    break;
                }
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(used[i]) res++;
        }
        cout<<res<<" "<<sum<<endl;
    }
}