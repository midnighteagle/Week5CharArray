#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the input: "<<endl;
    cin>>str;
    //o/p
    cout<<"str: "<<str<<endl;
    cout<<str[0]<<str<<endl;
    str.push_back('l');
    str.push_back('o');
    str.push_back('v');
    str.push_back('e');
    str.pop_back();
    cout<<str<<endl;
    string Fname ="LOVE";
    string Lname = "BABBAR";
    string ans = Fname + Lname;
    cout<<ans<<endl;
    string name = "hello jee kaisa ho same";
    string word = "kaise";
    // string ans = name.find(word);
    //cout<<ans<<endl; // it say Index.
    if(name.find(word)!= string::npos){
        cout<<ans<<endl;
    }

    return 0;
}