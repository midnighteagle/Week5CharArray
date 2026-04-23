#include<iostream>
using namespace std;
int main(){
    char b[] = "xyz";
    char* c = &b[0];
    cout << c <<" "<< *c <<endl; 

    char ch [] = "xyz";
    char* ptr = &ch[0];
    cout<< ch << " " << *ptr << " " << ptr <<endl;

    return 0;
}