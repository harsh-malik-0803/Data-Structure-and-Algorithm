#include<iostream>
#include<stack>
#include<string>
using namespace std;
void infix_to_postfix(string s){
    stack<char> st;  // making a stack 
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9' ){
            cout<<s[i];
        }
        else if(s[i]=='(' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() &&  st.top()!= '('){
                cout<<st.top();
                st.pop();
            }
            st.pop();   // also popping '('
        }
        else if((s[i]=='+' || s[i]== '-') && (st.top()=='*' || st.top()== '/') ){
            while(st.top()=='*' || st.top()=='/'){
                cout<<st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else if( s[i]=='(' || s[i]=='*' || s[i]=='/' || s[i]=='+' || s[i]=='-'){
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    string s;
    cin>>s;
    infix_to_postfix(s);
}