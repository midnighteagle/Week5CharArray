#include<iostream>
using namespace std;
int main(){
    int arr[] = {100,200,300, 400};
    int *p = arr;
    int* q = arr+1;
    cout<< "1->"<<arr<<endl;
    cout<< "2->"<<&arr<<endl;
    cout<< "3->"<<arr[0]<<endl;
    cout<< "4->"<<&arr[0]<<endl;
    cout<< "5->"<<p<<endl;
    cout<< "6->"<<&p<<endl;
    cout<< "7->"<<*p<<endl;
    cout<< "8->"<<q<<endl;
    cout<< "9->"<<&q<<endl;
    cout<< "10->"<<*q<<endl;
    cout<< "11->"<<*p+1<<endl;
    cout<< "12->"<<*(p)+2<<endl;
    cout<< "13->"<<*(p+2)<<endl;
    cout<< "14->"<<*(q+2)<<endl;
    cout<< "15->"<<*(q+4)<<endl;


    char cha[100] = "RacecaR";
    char* ptr = &cha[0];
    cout<<"1-> cha= "<<cha<<endl;
    cout<<"2-> &cha= "<<&cha<<endl;
    cout<<"3-> *(cha + 3)= "<<*(cha + 3)<<endl;
    cout<<"4-> ptr= "<<ptr<<endl;
    cout<<"5-> *ptr= "<<*ptr<<endl;
    cout<<"6-> *(ptr+3)= "<<*(ptr+3)<<endl;
    cout<<"7-> ptr + 2= "<<ptr + 2<<endl;
    cout<<"8-> ptr + 4= "<<ptr + 4<<endl;
    cout<<"9-> &cha[0]= "<<&cha[0]<<endl;

    char *ptr1 = "Babbar";
    cout<<"hi"<<endl;
    return 0;
}