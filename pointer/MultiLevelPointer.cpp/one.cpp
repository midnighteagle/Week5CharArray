#include<iostream>
using namespace std;
void solve (int* arr, int size){ // whenever the array in pass in function as a parameter then always pass as pointer(int* arr);
    cout<< sizeof(arr)<<endl;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    solve(arr,size);
    return 0;
}