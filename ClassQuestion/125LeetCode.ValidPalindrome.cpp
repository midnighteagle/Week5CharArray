// I have a doubt in it.
/*

Easy
Topics
premium lock icon
Companies
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.


Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/
#include<iostream>
//#include<cstring>
using namespace std;


    bool isPalindrome(string &s) {
        int len = s.length();
        int start = 0;
        int end = len - 1;
        while(start <= end){
            
            if(s[start] != s[end]){
                // agar start end ke equal nhi hai.
                return false;
                
            }
            start++;
            end--;
        }
        return true;
    }
int main(){
    string s ="A man, a plan, a canal: Panama";
    bool ans = isPalindrome(s);
    if(ans ==true){
        cout<<"This is a palindrome "<<ans<<endl;
    }
    else{
        cout<<"Not a palindrome "<<ans<<endl;
    }
    return 0;
}