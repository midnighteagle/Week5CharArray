/*
Modular Exponentiation
Difficulty: MediumAccuracy: 52.56%Submissions: 73K+Points: 4Average Time: 30m
Given three integers x, n, and M, compute (x^n) % M, i.e., the remainder when x raised to the power n is divided by M.

Examples:

Input: x = 3, n = 2, M = 4
Output: 1
Explanation: 32 % 4 = 9 % 4 = 1.
Input: x = 2, n = 6, M = 10
Output: 4
Explanation: 26 % 10 = 64 % 10 = 4.
Constraints:
1 ≤ x, n, M ≤ 109
*/
#include<iostream>
using namespace std;
int powMod(int x, int n, int M) {
        // code here
        
        long long int ans = 1;
        while(n > 0){
            if(n & 1){
                ans = (ans * x) % M;
    
            }
            x = (x * x) % M;
            n >>= 1;
        }
        return ans % M;
}

int main(){
    int x = 2, n = 10, M = 1000;

    cout << "Result: " << powMod(x, n, M) << endl;
    return 0;
}