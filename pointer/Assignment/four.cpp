#include<iostream>
using namespace std;
int main(){
    int b = 10;
    int* a = &b;
    cout<<a<<endl; // it give the address of b.
    return 0;
}