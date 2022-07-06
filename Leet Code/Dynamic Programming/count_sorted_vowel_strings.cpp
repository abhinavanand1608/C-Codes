#include<bits/stdc++.h>
using namespace std;


//DP Approach
int countVowelStrings(int n) {
    vector<int> ans(5, 1);
    for(int i=2;i<=n;i++){
        for(int i=3;i>=0;i--){
            ans[i] = ans[i] + ans[i+1];
        }
    }    
    int ret = 0;
    for(auto a:ans)
        ret += a;
    return ret;
}

//Backtracking Approach
vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
int countVowelStrings(int n){
    int count = 0;
    countVowelHelper(n, ' ', count);
    return count;
}

void countVowelHelper(int n, char last, int &count){
    if(n == 0)
        count++;
    else{
        for(auto i:vowels){
            if(last <= i){
                countVowelHelper(n-1, i, count);
            }
        }
    }
}