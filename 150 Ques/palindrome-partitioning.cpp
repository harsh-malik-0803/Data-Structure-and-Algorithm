// leetcode = https://leetcode.com/problems/palindrome-partitioning-ii/

class Solution {
public:
    vector<vector<int>> dp_palindrome ;
    vector<int> dp_mincut;
    
    bool ispalindrome(string &s, int start, int end) {
        if(start>= end){
            return true;
        }
        if(dp_palindrome[start][end] != -1)
            return dp_palindrome[start][end];
        
        dp_palindrome[start][end]= (s[start] == s[end]) && ispalindrome(s , start+1 , end-1);
            return dp_palindrome[start][end] ;
    }
    int find_mincut(string s ,int start , int end ,  int mincut){
    
        if(start ==end || ispalindrome(s , start , end)) return 0;
        
        if(dp_mincut[start] != -1){
            return dp_mincut[start];
        }
        
        for(int i =start ;i<= end ; i++){
            if(ispalindrome(s, start , i))
            mincut = min( mincut , 1+ find_mincut(s , i+1 , end , mincut ));
            dp_mincut[start] = mincut;
        }
        return dp_mincut[start];
    }
    
    int minCut(string s) {
        
        dp_mincut.resize(s.length() , -1);
        dp_palindrome.resize(s.length() , vector<int> (s.length(), -1)) ;
        
        return find_mincut(s , 0 , s.length()-1 , s.length()-1);
    }
};