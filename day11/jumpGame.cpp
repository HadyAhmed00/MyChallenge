//
// Created by Hady Ahmed on 7/9/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>

#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
//int maxResult(vector<int>& nums, int k) {
//    int n = nums.size() , ans = 0;
//    priority_queue<pair<int,int>> pq;
//    pq.push({nums[0],0});
//    for(int i = 1 ; i < n ; i++){
//
//        int subp = 0;
//        while(!pq.empty()){
//            auto [val,idx] = pq.top();
//            if((i-idx)<=k){
//                subp = val;
//                break;
//            }else{
//                pq.pop();
//            }
//        }
//        pq.push({nums[i]+subp,i});
//    }
//    while(!pq.empty()){
//        auto [val,idx] = pq.top();
//        if(idx == (n-1)) return val;
//        pq.pop();
//    }
//    return 0;
//}
//int main(){
//
//    return 0;
//}
