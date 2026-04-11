#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* p = &a;
    int** q = &p;
    cout<< "1->a = "<<a<<endl;
    cout<< "2-> &a= "<<&a<<endl;
    // cout<< "3-> *a ="<<*a<<endl; // it not a pointer variable.
    cout<< "4->p= "<<p<<endl;
    cout<< "5->&p= "<<&p<<endl;
    cout<< "6->*p= "<<*p<<endl;
    // cout<< "7->**p= "<<**p<<endl; // it give error
    cout<< "8->q= "<<q<<endl;
    cout<< "9->&q= "<<&q<<endl;
    cout<< "10->*q= "<<*q<<endl;
    cout<< "11->**q= "<<**q<<endl;
    // cout<< "12->**q= "<<***q<<endl; // it give an error 
    return 0;
}