#include<iostream>
using namespace std;
void solve(int* arr, int size){
    arr[0] = 1;// *(arr+0) =1
    arr[1] = 2; // *(arr+1) = 2
    arr[2] = 20; // *(arr+2) = 20
}
int main(){
    int arr[] = {10,20,30};
    int size = 3;
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    solve(arr, size);
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    return 0;
}