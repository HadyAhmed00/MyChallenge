//
// Created by Hady Ahmed on 7/13/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Arrival_of_the_General(){
    int n;cin>>n;
    vector<int> arr;
    int maxVal=INT_MIN,maxIdx=0,minVal=INT_MAX,minIdx=0;
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        if(tmp> maxVal){
            maxVal=tmp;
            maxIdx = i;
        }else if(tmp==maxVal && i<maxIdx){
            maxIdx=i;
        }
        if(tmp<minVal)
        {
            minVal= tmp;
            minIdx =i;
        }else if(tmp==minVal && i>minIdx)
        {
            minIdx = i;
        }

        arr.push_back(tmp);
    }
    if(maxIdx<minIdx){
        int res =maxIdx+(n-1-minIdx);
        cout<<res;
    }else{
        int res =(maxIdx+(n-1-minIdx))-1;
        cout<<res;
    }


}
//
//int main(){
//
//    improve
//    Arrival_of_the_General();
//    return 0;
//}
