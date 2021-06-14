#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    ordered_set st;
    st.insert(5);
    st.insert(10);
    st.insert(1);
    st.insert(3);
    // st = 1,3,5,10

    cout<<*(st.find_by_order(2))<<endl;     //element at index 2

    cout<<st.order_of_key(6)<<endl;  // elements less than 6 

    st.insert(6);
    cout<<st.order_of_key(6)<<endl;  
}