#include<iostream>
using namespace std;
int main(){
    // refrence variable
    int a = 5;
    int &b = a; // refrenceing the a variable as b;

    //pointer 
    int d = 5;
    int* e = &a;  // pointing the address of the d variable.
    return 0;
}