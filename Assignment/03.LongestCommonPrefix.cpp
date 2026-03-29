/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

#include<iostream>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string> &strs){
    string ans ;
    int i = 0;
    while(true){
        char CurrChar = 0;
        for(auto str : strs){
            // if i is greater than or equal to the size of the string then break the loop and return the answer
            if(i >= str.size()){
                CurrChar = 0;
                break;
            }
            // Just Started Traversing The String
            if(CurrChar == 0){
                CurrChar = str[i];
            }
            // if the current character is not equal to the current character of the string then break the loop and return the answer
            else if(str[i] != CurrChar){
                CurrChar = 0;
                break;
            }         
            
        }
        //  if the current character is 0 then break the loop and return the answer
        if(CurrChar == 0){
            break;
        }
        // if the current character is not 0 then add it to the answer
        ans.push_back(CurrChar);
        i++;
    }
    // return the answer
    return ans;
}
int main(){
    vector<string> strs = {"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout<<"Longest Common Prefix: "<<ans<<endl;

    return 0;
}
