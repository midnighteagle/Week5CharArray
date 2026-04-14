#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    char* ptr = &ch;
    cout<< *ptr << endl;
    ch++;
    cout<< *ptr << endl;
    return 0;
}