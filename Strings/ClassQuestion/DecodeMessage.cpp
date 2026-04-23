/*
You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows:

Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
Align the substitution table with the regular English alphabet.
Each letter in message is then substituted using the table.
Spaces ' ' are transformed to themselves.
For example, given key = "happy boy" (actual key would have at least one instance of each letter in the alphabet), we have the partial substitution table of ('h' -> 'a', 'a' -> 'b', 'p' -> 'c', 'y' -> 'd', 'b' -> 'e', 'o' -> 'f').
Return the decoded message.

 

Example 1:


Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
Output: "this is a secret"
Explanation: The diagram above shows the substitution table.
It is obtained by taking the first appearance of each letter in "the quick brown fox jumps over the lazy dog".
Example 2:


Input: key = "eljuxhpwnyrdgtqkviszcfmabo", message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb"
Output: "the five boxing wizards jump quickly"
Explanation: The diagram above shows the substitution table.
It is obtained by taking the first appearance of each letter in "eljuxhpwnyrdgtqkviszcfmabo".
 

Constraints:

26 <= key.length <= 2000
key consists of lowercase English letters and ' '.
key contains every letter in the English alphabet ('a' to 'z') at least once.
1 <= message.length <= 2000
message consists of lowercase English letters and ' '.
*/

#include<iostream>
using namespace std;
//Modular Approch 
void createMapping(unordered_map<char, char> &mapping, string key){
    char start = 'a';
    for(int i = 0; i < key.length(); i++){
        //If mapping is not already present, then create it
        if(mapping.find(key[i]) == mapping.end()){
            mapping[key[i]] = start;
            start++;
        }
    }
}
string useMapping(unordered_map<char, char> mapping, string message){
    string ans = " ";
    for(int i = 0; i < message.length(); i++){
        char mappedChar = mapping[message[i]];
        ans.push_back(mappedChar);
    }
    return ans;
}
string decodeMessage(string key, string message){
    unordered_map<char, char> mapping;
    char space = ' ';
    mapping[space] = space;
    // Create mapping: 
    createMapping(mapping, key);
    // Step 2: Use mapping decode message
    string ans = useMapping(mapping,message);
    return ans;

}

// mix Code!!
string decodeMessage1(string key, string message) {
    // Create mapping:
    unordered_map<char ,char> mapping;
    char space = ' ';
    char start = 'a';
    int Index = 0;
    mapping[space] = space;

    while(start <= 'z' && Index < key.length()){
        char keyKaCurrChar = key[Index];
        // Now Start the mapping :
        // mapping -> keyKaCurrChar -> alphabet:
        if(mapping.find(keyKaCurrChar)!= mapping.end()){
            // Agar CurrChar ki Mapping already present hai
            // no need to store mapping here! move next character.
            Index++;
        }
        else{
            //already present nahi hai
            // create mapping & move Ahead
            mapping[keyKaCurrChar]=start;
            start++;
            Index++;
        }
        
    }
    // step 2: use mapping to decode Message:
    string ans = " ";
    for(int i = 0; i < message.length(); i++){
        char msgChar = message[i];
        char mappedChar = mapping[msgChar];
        ans.push_back(mappedChar);
    }
    return ans;
}
int main(){
    string key ="the quick brown fox jumps over the lazy dog";
    string message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    string Decode = decodeMessage(key, message);
    cout<<"decoded message: "<<Decode<<endl;
    return 0;
}