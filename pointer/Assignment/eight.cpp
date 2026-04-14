#include<iostream>
using namespace std;
int main(){
    double a = 10.54; // *8 byte
    double *d = &a;
    d = d + 1;
    cout << d << endl; // it return the address of d ;
    return 0;
}