#include<iostream>
#include<climits>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void floyd_warshell(int ** graph , int n){
    int dist[n][n];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            dist[i][j] = graph[i][j];
            if(dist[i][j]==0 ){
                dist[i][j] = INT_MAX;
            }
        }
    }
    for(int k=0 ;k< n ;k++){
        for(int i=0 ;i<n ; ++i){
            for(int j =0 ;j< n ; ++j){
                if(dist[i][j] > dist[i][k]+dist[k][j] && dist[k][j]!= INT_MAX && dist[i][k]!= INT_MAX){
                    dist[i][j] = dist[i][k]+dist[k][j];
                }
            }
        }
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
    floyd_warshell(edges,n);
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;
}