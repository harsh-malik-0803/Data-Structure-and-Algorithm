#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string > v;

void subsequence(string s,string ans){
    if(s.length()==0){
        v.push_back(ans);
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+ch);
}
int main(){
subsequence("ABC"," ");
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<endl;
}

}