#include<iostream>
using namespace std;
void ConvertIntoUpperCase(char arr[], int n){
    int len = strlen(arr);
    for(int i = 0; i < len; i++){
        char ch = arr[i];
        if(ch >= 'a' && ch <='z'){
            ch = ch - 'A'+'a';
            arr[i] = ch;
        }
    }
}
void ConvertIntoLowerCase(char arr[], int n){
    int len = strlen(arr);
    for(int i = 0; i < len; i++){
        char ch = arr[i];
        // if letter is a lowerCase letter
        // then only convert it.
        if(ch >= 'A' && ch <='Z'){
            ch = ch - 'A'+'a';
            arr[i] = ch;
        }
    }
}
int main(){
    char arr [1000];
    cin>>arr;
    ConvertIntoLowerCase(arr,1000);
    cout<< arr<<endl;
    //ConvertIntoUpperCase(arr,1000);
    //cout<< arr<<endl;
    return 0;
}