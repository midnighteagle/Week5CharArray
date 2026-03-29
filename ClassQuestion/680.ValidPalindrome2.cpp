#include <iostream>
using namespace std;
bool cheakPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
bool validPalindrome(string palindrome)
{
    int len = palindrome.length();
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        if (palindrome[start] == palindrome[end])
        {
            start++;
            end--;
        }
        else if (palindrome[start] != palindrome[end])
        {
            // delete start index
            bool DeleteStartIndex = cheakPalindrome(palindrome, start + 1, end);
            // delete end index
            bool DeleteEndIndex = cheakPalindrome(palindrome, start, end - 1);
            // find the finalAns
            bool finalAns = DeleteStartIndex || DeleteEndIndex;
            return finalAns;
        }
    }
    return true;
}
int main(){
    string palindrome = "abca";
    bool ans =  validPalindrome(palindrome);
    if(ans){
        cout<<"this is a valid palindrome."<<endl;
    }
    else{
        cout<<"this is not a valid palindrome."<<endl;
    }
    return 0;
}