/*
917. Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.



Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
Example 2:

Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
Example 3:

Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"


Constraints:

1 <= s.length <= 100
s consists of characters with ASCII values in the range [33, 122].
s does not contain '\"' or '\\'.
*/
#include<iostream>
using namespace std;
string reverseOnlyLetters(string s) {
    int start = 0;
    int end = s.size()-1;
    while(start < end){
        cout<<"Index Of Start: "<<start<<" "<<"Index Of End: "<<end<<endl;
        cout<<"Value Of Start: "<<s[start]<<" "<<"Value of End: "<<s[end]<<endl;
        if(isalpha(s[start]) && isalpha(s[end])){
            swap(s[start],s[end]);
            cout<<"Value Of Start: "<<s[start]<<" "<<"Value of End: "<<s[end]<<endl;
            start++;
            end--;
        }
        else if(!isalpha(s[start])){
            start++;
            cout<<"index Of Start: "<<start<<endl;
        }
        else if(!isalpha(s[end])){
            end--;
            cout<<"index Of end: "<<end<<endl;
        }
        cout<<"Index Of Start: "<<start<<" "<<"Index Of End: "<<end<<endl;
        cout<<"Value Of Start: "<<s[start]<<" "<<"Value of End: "<<s[end]<<endl;
    }
    return s;
}
int main(){
    string s = "ab-cd";
    string ans = reverseOnlyLetters(s);
    cout<<"the reverse of only String: "<<ans<<endl;

    return 0;
}