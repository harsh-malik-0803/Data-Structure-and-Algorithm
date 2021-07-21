#include<iostream>
using namespace std;
int main(){
    int arr[4][5]= {{1 , 2, -1 , -4 , -20},{-8 , -3, 4 , 2 , 1}, {3 , 8, 10 , 1 , 3},{-4 , -1, 1 , 7 , -6} };
    int dp[4][5];

    dp[3][4] = arr[3][4];
    for(int i= 2 ;i>=0 ;--i){
        dp[i][4] = arr[i][4]+dp[i+1][4];
    }
    for(int i= 3 ;i>=0 ;--i){
        dp[3][i] = arr[3][i]+dp[3][i+1 ];
    }

    for(int i = 2 ;i>=0 ;--i){
        for(int j=3 ;j>=0 ;--j){
            dp[i][j] = dp[i+1][j]+dp[i][j+1]- dp[i+1][j+1]+arr[i][j];
        }
    }
    for(int lptr=0 ;lptr<3 ;++lptr){
        for(int rptr=lptr+1 ;rptr<=3;++rptr){
            int temp[ ]

        }
        
    }
}