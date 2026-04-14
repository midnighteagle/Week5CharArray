#include<iostream>
using namespace std;
int main(){
    int* ptr = 0;
    int a = 10;
    *ptr = a;
    cout<< *ptr <<endl; // ptr is a null pointer
    return 0;
}