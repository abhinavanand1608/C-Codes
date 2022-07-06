#include<bits/stdc++.h>
using namespace std;


//Pseudo Code

for(int i=0;i<len(str1)+1;i++){
    for(int j=0;j<len(str2)+1;j++){
        if(i == 0 && j == 0)
            T[i][j] = 0;
        else if(i == 0)
            T[i][j] = T[i][j-1] + 1;
        else if(j == 0)
            T[i][j] = T[i-1][j] + 1;
        else{
            if(str1[i-1] == str2[j-2])
                T[i][j] = T[i-1][j-1];
            else
                T[i][j] = 1 + min(T[i][j-1], T[i-1][j], T[i-1][j-1]);
        }
    }
}