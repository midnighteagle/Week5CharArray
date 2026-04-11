#include<iostream>
using namespace std;
void solve(vector<int>v){ // it pass by refrence.
    cout<<v.size()<<endl;
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    solve(v);

    return 0;
}