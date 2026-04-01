/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/
#include<iostream>
using namespace std;
int strstr(string haystck , string needle){
    int n = haystck.size();
    int m = needle.size();
    for(int i = 0; i <= n - m; i++){
        for(int j = 0; j < m; j++){
            if(needle[j] != haystck[i+j]){
                break;
            }
            if(j == m - 1){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    string haystack = "butsad";
    string needle = "sad";
    int ans = strstr(haystack,needle);
    cout<<"the index of the first Occurance: "<<ans<<endl;
    return 0;
}