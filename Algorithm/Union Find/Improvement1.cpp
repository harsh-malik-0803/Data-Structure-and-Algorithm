#include<iostream>
using namespace std;
class QuickFind{
    int * id ;
    int * sz ;    // having size of tree 
    // adding root to QuickUnion
    int root(int i){
        while(id[i] != i){
            i = id[i];
        }
        return i;
    } 
    public:
    QuickFind(int N){
        id = new int[N];
        sz = new int[N];
        for(int i=0;i<N;i++){
            id[i] = i;
            sz[i] = 1;
        }
        
    }
    bool connected(int p, int q){
        return (id[p] == id[q]);;
    }
    void Union(int p,int q){
        int i = root(p);
        int j = root(q);

        if(i==j){
            return ;
        }
        else if(sz[i] < sz[j]){
            id[i] = j;
            sz[j] += sz[i];
        }
        else{
            id[j] = i;
            sz[i] += sz[j];
        }
    }
    // Time Complexity - 
    // Initialise = O(N)   
    // Union = O(logN)
    // Find Operation = O(logN)
};
int main(){

}