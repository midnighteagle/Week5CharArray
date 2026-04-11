#include<iostream>
using namespace std;
int main(){
    // this bad practice.
    int* ptr;
    cout<<*ptr<<endl; // give the segmentation fault or random value or 1 .

    // to fix it then make a null pointer 
    int* ptr = 0;
    return 0;
}