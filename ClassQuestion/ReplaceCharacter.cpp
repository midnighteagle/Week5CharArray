#include<iostream>
using namespace std;
void replaceCharacter(char originalChar, char NewChar, char arr[],int size){
    for(int i = 0;  i < size; i++){
        if(arr[i]== originalChar){
            arr[i] = NewChar;
        }
    }
}
int main(){
    char arr [1000];
    cout<<"Enter your Character Array: "<<endl;
    cin>> arr;
    replaceCharacter ('@', '_', arr, 1000);
    cout<<arr<<endl;

    return 0;
}