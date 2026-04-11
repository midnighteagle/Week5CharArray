#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int* ptr = arr;
    int* ptr1 = arr+1; // it run perfectly.
    //arr = ptr+1; // it give the error 
    cout<<arr+1<<endl; // it run perfectly because i access it by adding +1.
    cout<<"Hello"<<endl;

    cout<< "1->"<<arr<<endl;
    cout<< "2->"<<&arr<<endl;
    cout<< "3->"<<arr[0]<<endl;
    cout<< "4->"<<&arr[0]<<endl;
    cout<< "5->"<<ptr<<endl;
    cout<< "6->"<<&ptr<<endl;
    cout<< "7->"<<*ptr<<endl;
    cout<< "8->"<<*arr+1<<endl;
    cout<< "9->"<<*(arr+1)<<endl;
    cout<< "10->"<<*(arr+3)<<endl;
    return 0;
}