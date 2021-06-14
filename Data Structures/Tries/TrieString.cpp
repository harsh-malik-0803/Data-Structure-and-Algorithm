#include<bits/stdc++.h>
using namespace std;
class trienode{
    public:
    trienode** children;
    int weight;
    trienode(){
        children = new trienode[26];
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        weight =0;
    }
};
void insert(string s, int weight,trienode* root){
    if(s.empty())   return ;
    int index = s[0] - 'a';
    trienode* child;
    if(root->children[index]){
        child = root->children[index];
    }
    else {
        child = new trienode();
        root->children[index] = child;
    }
    if(root->weight < weight){
        root->weight = weight;
    }
    insert(s.substr(1),weight,child);
}

int searchBestWeight(string s,trienode* root){
    int bestweight = -1;
    int index = s[0] - 'a';
    trienode* child;
    if(root->children[index] == index){
        child = root->children[index];
    }
    else {
        child = new trienode();
        root->children[index] = child;
    }
    if(root->weight < weight){
        root->weight = weight;
    }
    insert(s.substr(1),weight,child);
}
int main(){

}