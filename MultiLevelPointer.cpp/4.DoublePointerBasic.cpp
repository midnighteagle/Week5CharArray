#include<iostream>
using namespace std;
int main(){
    // int * -> pointer to an integer
    // int** -> pointer to an int*; pointer to ab integer
    int a = 5;
    int* p = &a;
    int *q = p;
    cout<< "1->a = "<<a<<endl;
    cout<< "2-> &a= "<<&a<<endl;
    // cout<< "3-> *a ="<<*a<<endl; // it not a pointer variable.
    cout<< "4->p= "<<p<<endl;
    cout<< "5->&p= "<<&p<<endl;
    cout<< "6->*p= "<<*p<<endl;
    cout<< "7->q= "<<q<<endl;
    cout<< "8->&q= "<<&q<<endl;
    cout<< "9->*q= "<<*q<<endl;
    // cout<< "10->**q= "<<**q<<endl; // it give the error because next pointer is not available

    return 0;
}