#include<bits/stdc++.h>
using namespace std;

bool arrayRotation(string str1, string str2){
    if(str1.length() != str2.length())
        return false;
    string temp = str1 + str2;
    return(temp.find(str2) != string::npos);
}

int main(){
    string str1 = "AACD", str2 = "ACDA";
    if(arrayRotation(str1,str2))
        cout<<"Strings are rotations of each other"<<endl;
    else
        cout<<"Strings are not rotations of each other"<<endl;
}