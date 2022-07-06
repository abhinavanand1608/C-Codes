#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump p[], int dist[], int n){
    int start = 0;
    int requiredFuel = 0;
    int extrafuel = 0;
    for(int i=0;i<n;i++){
        extrafuel += (p[i].petrol - p[i].distance);
        if(extrafuel < 0){
            start = i+1;
            requiredFuel += extrafuel;
            extrafuel = 0;
        }
    }
    if(requiredFuel + extrafuel >= 0) return start;
    return -1;
}