#include<iostream>
using namespace std;
int main(){
    // integer create kro stack me.
    int a = 5;
    cout<<a<<endl;
    // integer creation in heap memory.
    int* p = new int;
    *p = 5;
    cout<<*p<<endl;
    delete p; // delocate the keyword.
    return 0; 
}