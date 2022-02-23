#include <bits/stdc++.h>
using namespace std;

string StringChallenge(string str){
    int n = str.size();
    string ans = "";
    for(int i = 0; i < n; i++){
        if(str[i] == 'M' && i == 0) continue;
        else if(str[i] == 'M' && i == (n-1)){
            ans.push_back(str[i-2]);
            break;
        }
        else if(str[i] == 'M'){
            ans.push_back(str[i-1]);
        }
        else if(str[i] == 'N' && i == (n-1)) continue;
        else if(str[i] == 'N'){
            i++;
        }
        else{
            ans.push_back(str[i]);
        }
    }
    return ans;
}


/*
if M is encountered then duplicate the previous character, and if N is encountered then remove the next character of the string

input: oMoMkkNrrN
output: ooookkr

*/

int main(){
    string s;
    std::getline(std::cin, s);
    cout << StringChallenge(s);
    return 0;
}



