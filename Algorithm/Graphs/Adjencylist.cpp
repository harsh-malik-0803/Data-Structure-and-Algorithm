#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 2;
vector<int> adj[n];
int main(){
    int N , E;
    cin>>N>>E;
    for(int i = 0 ;i< E ; i++){
        int a, b ;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i< N ;i++){
        cout<<i << "-> ";
        vector<int> :: iterator it;
        for(it= adj[i].begin() ; it != adj[i].end(); it++){
            cout<<*it<<", ";
        }
        cout<<endl;
    }
}