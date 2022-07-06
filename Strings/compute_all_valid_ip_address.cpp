#define long long int ll;
#include<bits/stdc++.h>
using namespace std;

bool isValidIP(string &str){
    if(str.length() > 3)
        return false;
    if(str.front() == '0' and str.length() > 3)
        return false;
    ll val = stoll(str);
    return (val >= 0 and val <= 255);
}

void computeAllValidIPAddress(string &str, vector<string> &res){
    for(ll i=1 ; i<=3 and i<str.length();i++){
        string first = str.substr(0,i);
        if(isValid(first)){
            for(ll j = 1;j<=3 and i+j<str.length();j++){
                string second = str.substr(i,j);
                if(isValid(second)){
                    for(ll k = 1;k<=3 and i+j+k<str.length();k++){
                        string third = str.substr(i+j,k);
                        string fourth = str.substr(i+j+k);
                        if(isValid(third) and isValid(fourth))
                            res.emplace_back(first + "." + second + "." + third + "." + fourth);
                    }
                }
            }
        }
    }
}

int main(){
    string str;
    cin>>str;

    vector<string> res;
    computeAllValidIPAddress(str,res);

    for(auto i : res)
        cout<<i<<"\n";
}