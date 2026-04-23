/*
791. leetcode
Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

Return any permutation of s that satisfies this property.



Example 1:

Input: order = "cba", s = "abcd"

Output: "cbad"

Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a".

Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

Example 2:

Input: order = "bcafg", s = "abcd"

Output: "bcad"

Explanation: The characters "b", "c", and "a" from order dictate the order for the characters in s. The character "d" in s does not appear in order, so its position is flexible.

Following the order of appearance in order, "b", "c", and "a" from s should be arranged as "b", "c", "a". "d" can be placed at any position since it's not in order. The output "bcad" correctly follows this rule. Other arrangements like "dbca" or "bcda" would also be valid, as long as "b", "c", "a" maintain their order.



Constraints:

1 <= order.length <= 26
1 <= s.length <= 200
order and s consist of lowercase English letters.
All the characters of order are unique.
*/


#include<iostream>
#include<string>


using namespace std;
string orderCopy;
static bool cmp(char a, char b){
    // logic->
    // order wali string me dekhe, k konsa character pehle se anna chahiye 
    // and kon sa character baad me aana chahiye 
    // true a will be placed before b
    // false b will be placed before a.

    // hame sirf order wali string me a and b char kaha aur kaise exist krta hai,
    // same wahi replicate karna hai.
    return (orderCopy.find(a) < orderCopy.find(b));
}
string customSortString(string order, string s){
    orderCopy = order;
    sort(s.begin(), s.end(), cmp);
    return s;
}
int main(){
    string order = "cba";
    string s = "abcd";

    string result = customSortString(order, s);

    cout << "Sorted string: " << result << endl;
    return 0;
}