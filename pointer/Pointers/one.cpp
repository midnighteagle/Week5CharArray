#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<a<<endl;; // this give the output 5
    cout<<&a<<endl; // this give the garbage value
    cout<<ptr<<endl;// this give the garbage value
    cout<<&ptr<<endl; // this give the garbage value
    cout<<*ptr<<endl; // this give the output value is 5 -> value at ptr(*ptr)

    int xyz = 15;
    int pqr = 12;
    int* ptr1 = &xyz;
    int* ptr2 = &pqr;
    cout<<xyz<<endl;
    cout<<ptr1<<endl;
    cout<<&ptr1<<endl; 
    cout<<*ptr1<<endl;

    cout<<pqr<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl; 
    cout<<*ptr2<<endl;
    

    return 0;
}