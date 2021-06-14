#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int findMinVertex(int *distance,bool*visited,int n){
    int minvertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i] &&(minvertex==-1 || distance[i]<distance[minvertex]))
        {
            minvertex=i;
        }
    }
    return minvertex;
}
void dikshtra(int** edges,int n){
    int*parent=new int[n];
    int*distance=new int[n];
    bool* visited=new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
        distance[i]=INT_MAX;
    }
    distance[0]=0;
    
    for(int i=0;i<n-1;i++){
        // find min vertex
        int minvertex=findMinVertex(distance,visited,n);
        visited[minvertex]=true;
        // explore unvisited neighbors 
        for(int j=0;j<n;j++){
            if(edges[minvertex][j] !=0 && !visited[j]){
                if(edges[minvertex][j]<distance[j]){
					int dist = edges[minvertex][j] + distance[minvertex];
                    if(dist < distance [j])
                    distance[j]=dist;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
	delete [] visited;
	delete [] distance;
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
