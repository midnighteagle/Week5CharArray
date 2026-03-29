// i have doubt in it
#include<iostream>
using namespace std;
int expandAroundCenter(string s, int start, int end){
    int count = 0;
    while( start >= 0 && end < s.length() && s[start] == s[end]){
        count ++;
        start--;
        end++;
    }
    return count;
}
int PalindromicSubstring(string s){
    int totalCount = 0;
    for(int center = 0; center < s.length(); center++){
        // odd
        int start = center;
        int end = center;
        int oddPalindromeSubStringCount = expandAroundCenter(s, start, end);
        //even 
        start = center;
        end = center + 1;
        int evenPalindromeSubstringCount = expandAroundCenter(s,start,end);
        totalCount = totalCount + oddPalindromeSubStringCount + evenPalindromeSubstringCount;
    }
    return totalCount;
}

int main(){
    string s = "aaa";
    int ans = PalindromicSubstring(s);
    cout<<"the palindromic Substring: "<<ans<<endl;
    return 0;
}