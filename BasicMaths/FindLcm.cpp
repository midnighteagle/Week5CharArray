// the lcm = A*B/gcd;
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
    int a = 4;
    int b = 4;
    int lcm = (a*b) / gcd(a,b);
    cout<< "the Lcm of Two number: " << lcm << endl;
    return 0;
}