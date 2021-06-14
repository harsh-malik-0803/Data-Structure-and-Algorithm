#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> sub_search(string text,string pattern ){
    int m = text.length();    // m>n
    int n = pattern.length();
    vector<int> v;
    for(int i=0;i<= m-n;i++){
        if(text[i]!= pattern[0])    continue;
        else{
            int j;
            for(j=1;j<n;j++){
                if(text[j+i]!= pattern[j])  break;
            }
            if(j==n)    
            v.push_back(i);
        }
    }
    return v;
}
int main(){
    vector<int > ans = sub_search("INAHAYSTACKNEEDLEINA", "NEEDLE");
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}