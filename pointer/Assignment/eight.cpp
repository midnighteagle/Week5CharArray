//Assume memory address of variable 'a' is : 200 and a double variable is of size 8 byte. what will be the output
#include<iostream>
using namespace std;
int main(){
    double a = 10.54; // *8 byte
    double *d = &a;
    d = d + 1;
    cout << d << endl; // it return the address of d ;
    return 0;
}