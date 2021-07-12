#include<bits/stdc++.h>
using namespace std;
int users ;
vector<vector<bool>> follow_list;
// 0 means dont follow each other 
// 1 - means here columns follows rows 

vector<vector<int>> timestamp_list;

void init(int N){
    users = N;
    for(int i=0 ;i<=users ; i++){
        for(int j=0 ;j<= users ;j++){
            // initialising a list such that no-one follow each other
            follow_list[i][j] = false ;
        }
    }
}
void follow(int uID1 , int uID2 , int timestamp){
    // uID1 follow user uID2
    follow_list[uID2][uID1] = true;
    timestamp_list[uID2][uID1] = timestamp;
    // timestamp indicates current time
}
void makePost(int uID , int pID , int timestamp){
    
}
void like(int pID , int timestamp){

}
void getFeed(int uID , int timestamp , int pIDList[]){

}

int main(){

}