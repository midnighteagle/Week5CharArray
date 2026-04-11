#include<iostream>
using namespace std;
int main(){
    char ch[100] ="Bubbar";
    char* cptr = ch;
    cout<<cptr<<endl;
    cout<<"base Address: "<<&ch<<endl;

    cout<< "1-> ch ="<<ch<<endl; // print entire string
    cout<< "2-> &ch ="<<&ch<<endl; //addrss of ch
    cout<< "3-> ch[0] ="<<ch[0]<<endl; //char on [0]
    cout<< "4-> &ch[0] ="<<&ch[0]<<endl; // it also print the all the string 
    cout<< "5-> &cptr ="<<&cptr<<endl; // print the address of cptr pointer
    cout<< "6-> *cptr ="<<*cptr<<endl;// value at pointer (*cptr) is L
    cout<< "7-> *(cptr + 3) ="<<*(cptr + 3)<<endl; //value at pointer at (cptr+3) is e
    cout<< "8-> cptr ="<<cptr<<endl; // it print the entire character array;
    cout<< "9-> cptr+1 ="<<cptr+1<<endl; // it print the entire character array;
    cout<< "8-> cptr + 3 ="<<cptr + 3 <<endl; // it print the entire character array;
    
    
    return 0;
}