#include<vector>
#include<iostream>
using namespace std;
class priorityqueue{
    vector<int> pq;
    public:
    int getsize(){
        return pq.size();
    }
    bool isEmpty(){
        return pq.size()==0;
    }
    int getmin(){
        if(isEmpty()){
            return 0;
        }
        return pq.at(0);
    }
    void insert(int element){
        pq.push_back(element);
        int childindex=pq.size()-1;
        
        while( childindex>0 ){
            int parentindex=(childindex-1)/2;
            if(pq[childindex]<pq[parentindex]){
                int temp=pq[childindex];
                pq[childindex]=pq[parentindex];
                pq[parentindex]=temp;
            }   
            else{
                break;
            }
            childindex=parentindex; 
        }
    }
    int removeMin(){
        if(isEmpty()){
            return 0; 
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        // downfy heap;
        int parentindex=0;
        int leftchildindex=2*parentindex+1;
        int rightchildindex=2*parentindex+2;

        while(leftchildindex<pq.size()){  // if not left child then 100% No right child;
            int minindex=parentindex;
            if(pq[minindex]>pq[leftchildindex]){
                minindex=leftchildindex;
            }
            if(rightchildindex<pq.size() && pq[rightchildindex]<pq[minindex]){
                minindex=rightchildindex;
            }
            if(minindex == parentindex){
                break;
            }
            int temp=pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;
            parentindex=minindex;
            leftchildindex=2*parentindex+1;
            rightchildindex=2*parentindex+2;
        }
        
        return ans;
        
    }
};
int main(){
    priorityqueue p;
    p.insert(1);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(-1);
    cout<<p.getsize()<<endl;
    cout<<p.getmin()<<endl;
    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }
    cout<<endl;
}