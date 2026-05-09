/*
6. Zigzag Conversion
Medium
Topics
premium lock icon
Companies
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);


Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"


Constraints:

1 <= s.length <= 1000
s consists of English letters (lower-case and upper-case), ',' and '.'.
1 <= numRows <= 1000
*/
#include<iostream>
using namespace std;
string convert(string s, int numRows) {
    if(numRows == 1) return s;
    vector<string>zigzac(numRows);
    int i = 0, row = 0;
    bool direction = 1;  // one means top to bottom.
    while(true){
        if(direction){
            while(row < numRows && i < s.size()){
                zigzac[row].push_back(s[i]);
                // zigzac[row++].push_back(s[i++]);
                row++;
                i++;
            }
            row = numRows - 2;
        }
        else{
            while(row >= 0 && i < s.size()){
                zigzac[row--].push_back(s[i]);
                i++;
            }
            row = 1;
        }
        if(i >= s.size()) break;
        direction = !direction;
    }
    string ans = "";
    for(int i = 0; i < zigzac.size(); i++){
        ans += zigzac[i];
        cout<<zigzac[i]<<endl;
    }
    return ans;
}
int main(){
    string s = "ABCDEFG";
    int numRows = 3;
    string ans = convert(s,numRows);
    cout<<"The zigzac of the "<<s<<": "<<ans<<endl;
    return 0;
}