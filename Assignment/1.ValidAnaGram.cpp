/*
242. Given two strings s and t, return true if t is an anagram of s, and false otherwise.



Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false



Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.


Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/
#include<iostream>
#include<algorithm>

using namespace std;
bool isAnagram1(string s, string t){
    // method 1: sorting(bruteforce );
    sort(s.begin(),s.end());
    sort(t.begin(), t.end());
    if(s==t){
        return true;
    }



    return false;
}
bool isAnagram(string s, string t){
    // method 2: (Counting method );
    // how to create a frequency table for String 
    int freqencyTable[256] ={0}; // create an array of size 256
    for(int i = 0; i < s.length(); i++){ // O(s)
        cout<<"Value Of Char: "<<s[i]<<" "<<"Frequency: "<<freqencyTable[s[i]]<<endl; 
        freqencyTable[s[i]]++; // typeCasting.
        cout<<"Value Of Char: "<<s[i]<<" "<<"Frequency: "<<freqencyTable[s[i]]<<endl; 

    }
    for(int i = 0; i < t.length(); i++){ //O(t)
        cout<<"Value Of Char: "<<t[i]<<" "<<"Frequency: "<<freqencyTable[t[i]]<<endl;
        freqencyTable[t[i]]--; // typecasting.
        cout<<"Value Of Char: "<<t[i]<<" "<<"Frequency: "<<freqencyTable[t[i]]<<endl;
    }
    for(int i = 0; i<256; i++){ //O(256)-> constant tc -> O(s+t)
        if (freqencyTable[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    bool ans = isAnagram(s,t);
    if(ans){
        cout<< "anagram or not : "<<ans<<endl;
    }
    return 0;
}