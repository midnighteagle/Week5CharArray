/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
Example 2:

Input: s = "f11", t = "b23"

Output: false

Explanation:

The strings s and t can not be made identical as '1' needs to be mapped to both '2' and '3'.

Example 3:

Input: s = "paper", t = "title"

Output: true

 

Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
*/

#include<iostream>
using namespace std;
bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; // mapping of each char of lang 's' to lang 't';
        bool isTcharMapped [256] = {0}; // stores of t[i] char already mapped with s[i];
        for(int i = 0; i <= s.size(); i++){
            if(hash[s[i]] == 0 && isTcharMapped[t[i]] == 0){
                hash[s[i]] = t[i];
                isTcharMapped[t[i]] = true;
            }
        }
        for(int i = 0; i <= s.size(); i++){
            if(hash[s[i]] != t[i]){
                return false;
            }
        }
        return true;
}
int main(){
    string s = "egg";
    string t = "add";
    bool ans = isIsomorphic(s,t);
    cout<<"the string is Isomorphic or not: "<<ans<<endl;
    return 0;
}