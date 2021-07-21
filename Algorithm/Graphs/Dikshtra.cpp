#include<iostream>
#include<climits>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
// int findMinVertex(int *distance,bool*visited,int n){
//     int minvertex=-1;
//     for(int i=0;i<n;i++){
//         if(!visited[i] &&(minvertex==-1 || distance[i]<distance[minvertex]))
//         {
//             minvertex=i;
//         }
//     }
//     return minvertex;
// }
// void dikshtra(int** edges,int n){
//     int*parent=new int[n];
//     int*distance=new int[n];
//     bool* visited=new bool[n];

//     for(int i=0;i<n;i++){
//         visited[i]=false;
//         distance[i]=INT_MAX;
//     }
//     distance[0]=0;
    
//     for(int i=0;i<n-1;i++){
//         // find min vertex
//         int minvertex=findMinVertex(distance,visited,n);
//         visited[minvertex]=true;
//         // explore unvisited neighbors 
//         for(int j=0;j<n;j++){
//             if(edges[minvertex][j] !=0 && !visited[j]){
//                 if(edges[minvertex][j]<distance[j]){
// 					int dist = edges[minvertex][j] + distance[minvertex];
//                     if(dist < distance [j])
//                     distance[j]=dist;
//                 }
//             }
//         }
//     }
//     for(int i=1;i<n;i++){
//         cout<<i<<" "<<distance[i]<<endl;
//     }
// 	delete [] visited;
// 	delete [] distance;
// }

int findminvertex(vector<int>distance , vector<bool> visited , int n){
    int minvertex =0 ;
    int over_dist = INT_MAX;
    for(int i=0 ;i< n ;++i){
        if(!visited[i] ){
            if(distance[i] < over_dist){
                minvertex = i;
                over_dist = distance[i];
            }
        }
    }
    return minvertex;
}
void print_path(vector<int> parent , int src , int dest , stack<int> &st){
    int i = dest;
    while(parent[i] != i){
        st.push(i);
        i = parent[i];
    }
    st.push(i);
}
void dikshtra(int **edges , int n ){
    vector<int> parent(n);
    vector<bool> visited(n , 0);
    vector<int> distance(n , INT_MAX);

    distance[0]=0 ;
    parent[0] =0 ;


    for(int i = 0;i< n;++i){
        int minvertex = findminvertex(distance , visited , n);
        visited[minvertex] = 1;

        for(int j =0 ;j< n ; ++j){
            if(!visited[j] && edges[minvertex][j]){
                if(distance[j] > (distance[minvertex]+edges[minvertex][j])){
                    distance[j] = distance[minvertex]+edges[minvertex][j];
                    parent[j] = minvertex;
                }
            }
        }
    }
    for(int i =0 ;i< n ;++i ){
        cout<<distance[i]<<" ";
    }
    cout<<endl;
    stack<int> st;
    print_path(parent ,0 , 4 , st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
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
        edges[s][f]=weight;
    }   
    dikshtra(edges,n);
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;
}


