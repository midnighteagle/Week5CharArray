/*
Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

Return any possible rearrangement of s or return "" if not possible.

 

Example 1:

Input: s = "aab"
Output: "aba"
Example 2:

Input: s = "aaab"
Output: ""
 

Constraints:

1 <= s.length <= 500
s consists of lowercase English letters.
*/
#include<iostream>
using namespace std;
string reorganizeString(string s) {
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }
    // find the most frequent char.
    char most_freq_char;
    int max_freq = INT_MIN;
    for(int i = 0; i < 26; i++){
        if(hash[i] > max_freq){
            max_freq = hash[i];
            most_freq_char = i + 'a';
        }
    }
    int index = 0;
    while(max_freq > 0 && index < s.size()){
        s[index] = most_freq_char;
        max_freq --;
        index = index + 2;
    }
    if(max_freq != 0){
        return " ";
    }
    hash[most_freq_char - 'a'] = 0;
    
    // lets place the rest of the character
    for(int i = 0; i<26; i++){
        while(hash[i] > 0){
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index = index + 2;
        }
    }
    return s;

}
int main(){
    string s = "aab";
    string ans = reorganizeString(s);
    cout<<"the reorganise of  string : "<<ans<<endl;
    return 0;
}