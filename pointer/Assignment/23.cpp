#include<iostream>
using namespace std;
void Square(int *p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}
int main(){
    int a = 10;
    Square(&a);
    cout<< a << endl;
    return 0;
}