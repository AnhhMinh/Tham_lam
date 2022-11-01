#include<bits/stdc++.h>
using namespace std;
    // push pop top size empty
main(){
    priority_queue<int> q; // max_heap
    priority_queue<int,vector<int>,greater<int>> Q; // min_heap
    // nguoc lai max_heap
    q.push(1);
    q.push(3);
    q.push(10);
    q.push(4);
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    q.pop();  // xoa thg o dau (<==> thg lon nhat)
    cout<<q.top()<<endl;
    
}