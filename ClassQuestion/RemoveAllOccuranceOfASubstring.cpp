#include<iostream>
using namespace std;

string removeOccurrences(string s, string part) {
        while(s.find(part)!=string :: npos){
            s.erase(s.find(part), part.length());
            //full string me se erase kro 
            // erase function ka 2 argument hota hai
            // first argument me, pattern ka starting index dena hota hai 
            // s.find(part), hame Starting index of pattern inside the full string 
            // provide krta hai.
            // 2nd argument, usme specify krna hai ki kitne character remove krna chahte 
            // ho
        }
        return s;
    }
int main(){
    string s = "wertabcgfhjdkabcqweejabcuwehgriwabcopaihebabc";
    string part = "abc";
    string ans = removeOccurrences(s,part);
    cout<<"the occurance is: "<<ans<<endl;
    return 0;
}