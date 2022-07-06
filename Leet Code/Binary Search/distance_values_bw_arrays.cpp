#include <bits/stdc++.h>
using namespace std;


//O(N*M) and O(1)
int findDistanceValues(vector<int> &arr1, vector<int> &arr2, int d){
    int distanceValue = 0;
    int pointer_one = -1;
    int pointer_two = -1;

    for(int pointer_one = 0;pointer_one < arr1.size();pointer_one++){
        pointer_two = 0;
        bool addNum = 0;
        for(int pointer_two = 0;pointer_two < arr2.size();pointer_two++){
            if(abs(arr1[pointer_one] - arr2[pointer_two]) <= d)
                addNum = false;
        }
        if(addNum)
            distanceValue++;
    }
    return distanceValue;
}

//O(N.logM) and O(1)

int findDistanceValue(vector<int> &arr1, vector<int> &arr2, int d){
    int distanceValue = 0;
    sort(arr2.begin(), arr2.end());

    for(int p1 = 0;p1 < arr1.size();p1++){
        int ai = arr1[p1];
        bool addNum = true;
        int l = 0;
        int r = arr2.size() -1;
        int m = -1;

        while(l<=r){
            m = l + (r-l)/2;
            int aj = arr2[m];
            if(abs(aj - ai) <= d){
                addNum = false;
                break;
            }
            else if(aj > ai)
                r = m - 1;
            else
                l = m + 1;
        }
        if(addNum)
            distanceValue++;
    }
    return distanceValue;
}