#include<iostream>
using namespace std;
int main(){
    int a = 7;
    int* c = &a;
    c = c+1;
    cout<< a << " " << *c <<endl;  // it give the the garbage value;
    return 0;
}