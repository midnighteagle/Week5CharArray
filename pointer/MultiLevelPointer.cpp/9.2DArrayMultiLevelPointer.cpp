#include<iostream>
using namespace std;
int main(){
    // Creating 2D array using stack
    int arr[2][4] = {
        {2,4,6,8},
        {3,5,7,9}
    };

    // create 2D array using heap memory

    // here 4 shows the count of row .
    // 3 shows the count of column.
    int** arr1 = new int*[4];// array of (pointer to integer) of size 4
    for(int i = 0; i<4; i++){
        // har pointer ke liye 1D array create krna hai.
        arr1[i] = new int[3];
    }
    // taking input
    for(int i = 0; i< 4; i++){
        for(int j = 0; j < 3; j++){
            cin>> arr1[i][j];
        }
    }
    // printing the value here!!
    cout<<"printing the value of two D Array: "<<endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i< 4; i++){
        delete[] arr1[i];
    } // if not done then it can memory leak.
    return 0;
}