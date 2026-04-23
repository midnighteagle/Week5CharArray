#include<iostream>
using namespace std;
bool cheakPalindrome(char arr[],int size){
    int len = strlen(arr);
    cout<<len<<endl;
    int start = 0;
    int end = len - 1;
    while(start < end){
        
        if(arr[start] == arr[end]){
            cout<<"index: "<<start<<" "<<"index: "<<end<<endl;
            cout<<"value: "<< arr[start]<<" "<<"value: "<<arr[end]<<endl;
            start++;
            end--;
        }
        else{
            // agar equal nhi hai.
            return false;
        }
        cout<<"index: "<<start<<" "<<"index: "<<end<<endl;
        cout<<"value: "<< arr[start]<<" "<<"value: "<<arr[end]<<endl;

        
    }
    // poora loop chal gaya to ja ke isko kr rhe hai.
    return true;
}
int main(){
    // Here we are working on Array Char not only char.
    char arr[1000];
    cout<<"Enter the character: ";
    cin>>arr;
    int ans = cheakPalindrome(arr,1000);
    cout<<"Palindrome or not: "<<ans<<endl;
    return 0;
}