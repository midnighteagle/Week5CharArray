#include<iostream>
using namespace std;
int main(){
    // array create krna hai stack me ;
    int arr[] ={1,2,3,4,5,6};
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<endl;

    // array create kro heap me 
    int* brr = new int[5];
    cout<<brr[0]<<brr[1]<<brr[2]<<brr[3]<<brr[4]<<brr[5]<<endl;
    return 0;
}