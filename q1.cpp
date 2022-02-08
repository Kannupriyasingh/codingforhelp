
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    string vowel, constr;
    int fvowel = -1, fconst = -1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vowel.push_back(s[i]);
        else constr.push_back(s[i]);
    }
    
   sort(vowel.begin(), vowel.end());
   sort(constr.begin(), constr.end());
   
    for(int i = 0; i < s.size(); i++){
        if(s[i] == vowel[0]) fvowel = i;
        else if(s[i] == constr[constr.size()-1]) fconst = i;
    }
    
    string fv = to_string(fvowel);
    string fc = to_string(fconst);
    
    string ans = vowel + fv + constr + fc;
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}


/*
input: temperature
output: aeeeu6mprrtt7
*/
