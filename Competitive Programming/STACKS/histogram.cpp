// given a array of length of histogram having width 1 . we have to find area (maximum)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int max_area(int arr[],int n){
    vector<int> left_limit;
    vector<int> right_limit;
    stack <int> st;

    // code to check left limit
    for(int i=0;i<n;i++){
        if(i==0 || arr[i-1]<arr[i]){
            st.push(i);
            left_limit.push_back(i);
        }
        else {
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                left_limit.push_back(0);
            }
            else{
                left_limit.push_back(st.top()+1);
            }
            st.push(i);
        }
    }
    // make stack empty or create a new 
    while (!st.empty())
    {
        st.pop();
    }
    
    // to check left limit

    for(int i=n-1;i>=0;i--){
        if(i==n-1 || arr[i+1]<arr[i]){
            st.push(i);
            right_limit.push_back(i+1);
        }
        else {
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                right_limit.push_back(n);
            }
            else{
                right_limit.push_back(st.top());
            }
            st.push(i);
        }
    }


    // vector<int>:: iterator it;
    // for(it=right_lt.begin();it!=right_lt.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    int maxno=0;
    for(int i=0;i<n;i++){
        int area = (right_limit[n-i-1]-left_limit[i])*arr[i];
        if(area>maxno){
            maxno=area;
        }
    }
    return maxno;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum area of Histogram is : "<<max_area(arr,n)<<endl;
}