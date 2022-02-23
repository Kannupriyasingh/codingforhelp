#include <bits/stdc++.h>
using namespace std;

string StringChallenge(string str){
    int n = str.size();
    vector<int>v;
    int idx = 0;
    while(idx < n){
        
        string s1 = "";
        while(str[idx] != ' ' && idx != n){
            s1.push_back(str[idx]);
            idx++;
        }
         
       idx++;
    stringstream conv(s1);
    int x = 0;
    conv >> x;
    v.push_back(x);
    }
   
   reverse(v.begin(), v.end());
   
   string ans= "";
   for(int i = 0; i < v.size(); i++){
       int val =  v[i];
       ostringstream str1;
        str1 << val;
        string digit = str1.str();
        
        ans += digit;
        ans += ' ';
   }
    
    return ans;
}

/*
given a string of numbers return a new string with numbers in reverse order
*/


int main(){
    string s;
    std::getline(std::cin, s);
    cout << StringChallenge(s);
    return 0;
}
