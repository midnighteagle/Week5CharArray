#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    // copy the pointer of p in q.
    int *q = p;
    cout<<"a: "<< a << endl;
    cout<<"&a: "<< &a << endl;
    // cout<<"*a: "<< *a << endl;// give the error beacause a is not pointer variable.
    cout<<"p: "<< p << endl;
    cout<<"&p: "<< &p << endl;
    cout<<"*p: "<< *p << endl;
    cout<<"q: "<< q << endl;
    cout<<"&q: "<< &q << endl;
    cout<<"*q: "<< *q << endl;
    return 0;
}