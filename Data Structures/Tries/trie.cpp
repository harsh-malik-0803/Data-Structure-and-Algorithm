#include<bits/stdc++.h>
using namespace std;

class Trienode{
    public:
    Trienode*left;
    Trienode* right;
    
};
    void insert(int n , Trienode* head){
        Trienode * curr = head;
        for(int i=31;i>=0;i--){
            int b = (n>>i ) & 1;
            if(b==0){
                if(!curr-> left){
                    curr->left = new Trienode();

                }
                curr = curr->left;
            }
            else{
                if(!curr->right){
                    curr->right= new Trienode();
                }
                curr= curr->right;
                }
        }
    } 
    int findMaxXor(Trienode* head , int * arr, int n){
        int max_xor = INT_MIN;
        for(int i=0;i<n;i++){
            int curr_xor = 0;
            Trienode* curr= head;
            int value = arr[i];
            for(int j=31;j>=0;j--){
                int b = (value>>j) & 1;
                if(b==0){
                    if(curr->right){
                        curr_xor += pow(2,j);
                        curr= curr->right; 
                    }
                    else curr= curr->left;
                }
                else{
                    if(curr->left){
                        curr_xor += pow(2,j);
                        curr= curr->left;
                    }
                    else    curr= curr->right;
                }
            }
            if(curr_xor> max_xor){
                max_xor = curr_xor;
            }
        }
        return max_xor;
    }
int main(){
    int arr[6]={8,1,2,15,10,5};
    Trienode*head = new Trienode();
    for(int i=0;i<6;i++){
        insert(arr[i],head);
    }
    cout<<findMaxXor(head,arr,6);
}
