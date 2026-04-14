#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<"1->"<<a<<endl;
    cout<<"2->"<<&a<<endl; // give the address
    // cout<< *a <<endl; // it give the error bcz it is not a pointer. and cannot derefrence the pointer.
    cout<<"3->"<<ptr<<endl; // give the same address
    cout<<"4->"<<&ptr<<endl; // give the address of ptr
    cout<<"5->"<<*ptr<<endl; // give the value at pointer
    cout<<"6->"<<(ptr = ptr+1) <<endl;  // give the address of next block
    cout<<"7->"<<(*ptr = *ptr/2) <<endl; // value at ptr = value at ptr / 2 = change value of ptr.
    cout<<"8->"<<(*ptr = *ptr+1) <<endl; //value at ptr + 1 ;
    
    return 0;
}