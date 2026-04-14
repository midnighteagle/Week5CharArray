// Assume that integer takes 4 bytes and integer pointer 8 bytes. this means system is 64bits.
#include<iostream>
using namespace std;
int main(){
    int a[5]; // 4 * 5 = 20;
    int* c;
    cout<< sizeof(a) << " " << sizeof(c) << endl;
    return 0;
}