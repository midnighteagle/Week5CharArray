#include<iostream>
using namespace std;
int SumOfBeautySubstring1(string s){
    // using NestedLoop using hashing array. 
    int beautySum = 0;

    // find all subString
    for(int i = 0; i < s.size(); i++){

        //Creation Array
        int mp[256] = {0}; // array of 26 size.
        
        for(int j = i; j< s.size(); j++){
            char &ch = s[j];
            mp[ch]++; //freq update of char ch.

            int mini = INT_MAX;
            int maxi = INT_MIN;

            
            for(char ch = 'a'; ch <= 'z'; ch++){
                if(mp[ch] > 0){ // if char is present in substring.
                    maxi = max(maxi, mp[ch]);
                    mini = min(mini, mp[ch]);
                }
            }


            int beauty = maxi - mini;
            beautySum = beautySum + beauty;
            
        }
    }
    return beautySum;
}
int SumOfBeautySubstring(string s){
    // using Map 
    int beautySum = 0;

    //Creation map
    unordered_map<char, int> mp;


    // find all subString
    for(int i = 0; i < s.size(); i++){
        mp.clear();
        for(int j = i; j< s.size(); j++){
            // char ch = s[j];
            char &ch = s[j];
            mp[ch]++; //freq update of char ch.

            int mini = INT_MAX;
            int maxi = INT_MIN;

            // find the most least frequent ch from the map
            for(auto  each:mp){
                maxi = max(maxi, each.second);
                mini = min(mini, each.second);
            }


            int beauty = maxi - mini;
            beautySum = beautySum + beauty;
            
        }
    }
    return beautySum;
    
}
int main(){
    string s = "aabcb";
    int sum = SumOfBeautySubstring1(s);
    cout<< "The Sum = "<<sum<<endl;
    return 0;
}