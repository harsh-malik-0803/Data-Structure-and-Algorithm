#include<iostream>
using namespace std;
class QuickFind{
    int * id ;
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
        int pid = id[p];
        int qid = id[q];
        for(int i=0;i<id.length();i++){
            if(id[i] == pid){
                id[i] = qid;
            }
        }
    }
    // Time Complexity - 
    // Initialise = O(N)   
    // Union = O(N)
    // Find Operation = O(1)
};
int main(){

}