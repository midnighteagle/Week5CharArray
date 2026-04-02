/*
GCD of two numbers
Difficulty: BasicAccuracy: 51.03%Submissions: 186K+Points: 1
Given two positive integers a and b, find GCD of a and b.

Note: Don't use the inbuilt gcd function

Examples:

Input: a = 20, b = 28
Output: 4
Explanation: GCD of 20 and 28 is 4
Input: a = 60, b = 36
Output: 12
Explanation: GCD of 60 and 36 is 12
Constraints:
1 ≤ a, b ≤ 109


*/
#include<iostream>
using namespace std;

int gcd(int a, int b) {
        // code here
        if(b == 0) return a;
        if(a == 0) return b;
        while(a > 0 && b > 0){
            if(a > b){
                a = a-b;
            }
            else{
                b = b - a;
            }

        }
        return a == 0 ? b : a;
        
}
int main(){
    int a = 5;
    int b = 2;
    int ans = gcd(a,b);
    cout<<"the GCD value = "<<ans<<endl;
    return 0;
}