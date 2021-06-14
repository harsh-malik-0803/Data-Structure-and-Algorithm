// cyclic graph not having topological sort
#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 2;

int main(){
    int N , E;
    cin>>N>>E;
    vector<int> adj[N];
    vector<int> indegree(N, 0);
    for(int i = 0 ;i< E ; i++){
        int a, b ;
        cin>>a>>b;
        adj[a].push_back(b);
        indegree[b]++;
    }
    queue<int> pq;
    for(int i =0 ;i< N ; i++){
        if(indegree[i] == 0 ){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        
        int front = pq.front();
        pq.pop();
        cout<<front<<" ";
        for(auto it : adj[front]){
            indegree[it]--;
            if(indegree[it] ==0 ){
                pq.push(it);
            }
        }
    }

}