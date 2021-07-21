#include<iostream>
#include<climits>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void bellmen_ford(int ** edges , int n){
    vector<int> distance(n, INT_MAX);
    distance[0]=0;
    // traverse (no of vertices-1) times 
    for(int i =0 ;i< n-1 ; ++i){
        // traverse every edge
        for( int j= 0 ;j< n ; ++j){
            for(int k= 0 ;k< n ; ++k ){
                if(edges[j][k] && (distance[k] > distance[j]+edges[j][k])){
                    distance[k] = distance[j]+edges[j][k];
                }
            }
        }
    }
    for(int i = 0 ;i< n ;++i ){
        cout<<distance[i]<<" ";
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
            edges[i][j]=0;
    }

    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
    }   
    bellmen_ford(edges,n);
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;
}


