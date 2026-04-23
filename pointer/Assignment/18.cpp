#include<iostream>
using namespace std;
int main(){
    int numbers[5];
    cout<< "1."<<numbers[0]<< numbers[1] << numbers[3]<< numbers[4] <<endl;
    int* p;
    // cout<< *p << " "<< p << endl;
    p = numbers;
    *p = 10;
    // cout<< *p <<" "<< p<<endl;
    p = &numbers[2];
    // cout << &numbers[2]<<endl;
    *p = 20;
    // cout << *p << p << endl;
    p--;
    // cout<< p<< endl;
    *p = 30;
    // cout<<*p<<" "<< p<<endl;
    p = numbers + 3;
    // cout<< p<< " "<< *p << endl;
    *p = 40;
    // cout<< p<< " "<< *p << endl;
    
    p = numbers;
    // cout<< p << endl;
    *(p+4) = 50;
    cout<< *(p+4) << (p+4)<<endl;
    for(int n = 0; n < 5; n++){
        cout<< numbers[n]<<",";
    }
    return 0;
}