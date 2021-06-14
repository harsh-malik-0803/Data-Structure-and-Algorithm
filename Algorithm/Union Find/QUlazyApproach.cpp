// changing in root 
#include<iostream>
using namespace std;
class QuickFind{
    int * id ;
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
        for(int i=0;i<N;i++)
        id[i] = i;
    }
    bool connected(int p, int q){
        return (id[p] == id[q]);;
    }
    void Union(int p,int q){
        int i = root(p);
        int j = root(q);
        id[i] = j;
    }
    // Time Complexity - 
    // Initialise = O(N)   
    // Union = O(N)
    // Find Operation = O(N)
};
int main(){

}