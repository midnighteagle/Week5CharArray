/*
Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

 

Example 1:

Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.
Example 2:

Input: words = ["a","b","c"], pattern = "a"
Output: ["a","b","c"]
 

Constraints:

1 <= pattern.length <= 20
1 <= words.length <= 50
words[i].length == pattern.length
pattern and words[i] are lowercase English letters.
*/
#include<iostream>
#include<vector>
using namespace std;
void normalise(string &str){
    char start = 'a';
    unordered_map<char,char> mapping;
    for(int  i = 0; i < str.length(); i++){
        char stringKaChar = str[i];
        if(mapping.find(stringKaChar) == mapping.end()){
            // if mapping pehle se present nhi hai
            // then create it and move ahead
            mapping[stringKaChar] = start;
            start++;

        }
    }
    // mapping Create ho chuki hai
    // string str ko update normalise krdo uski mapping 
    for(int i = 0; i < str.length(); i++){
        char mappedChar = mapping[str[i]];
        str[i] = mappedChar;
    }
    // toh hamne str wali string ko normalise/ update kr diya hai

}
vector<string> findAndReplacePattern(vector<string> &words, string pattern){
    vector<string> ans;
    // pattern ko normalise krDo,
    normalise(pattern);
    // lets traverse on words -> normalise then -> cheak kro pattern ki equal 
    // hai ki nhi
    for(int i = 0; i < words.size(); i++){
        // ith words
        string CurrWord = words[i];
        // normalize kro words ko 
        string currWordCopy = CurrWord;
        normalise(currWordCopy);
        if(currWordCopy == pattern){
            // ans me store krna hai
            ans.push_back(CurrWord);
        }

    }
    return ans;
}
int main(){
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";

    vector<string> ans = findAndReplacePattern(words, pattern);

    cout << "Matching words: ";
    for(string str : ans){
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}