/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:

Input: strs = [""]

Output: [[""]]

Example 3:

Input: strs = ["a"]

Output: [["a"]]

 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.
*/
#include<iostream>
#include<map>
using namespace std;
vector<vector<string>> groupAnagrams1(vector<string>& strs) {
    map< string, vector<string>>mp;
    for(auto str : strs){
        string s = str;
        sort(str.begin(), str.end());
        mp[str].push_back(str);
    }
    vector<vector<string>>ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it -> second);
    }
    return ans;
}
std::array<int,256>hashfun(string s){
    std::array<int, 256>hash = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAnagrams(vector<string>& strs){
    map<std::array<int,256>,vector<string>> mp;
    for(auto str: strs){
        mp[hashfun(str)].push_back(str);
    }
    vector<vector<string>>ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it -> second);
    }
    return ans;
    
    

}
int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(strs);

    // 🔽 Print output
    for(auto group : ans){
        cout << "[ ";
        for(auto word : group){
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}