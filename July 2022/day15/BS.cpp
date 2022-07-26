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
int searchInsert(vector<int>& nums, int target) {
    int l = 0, r = nums.size()-1;
    while (r>=l){
        int mid = (r+l)/2;
        if(target== nums[mid]){
            return mid;
        }else if (target>nums[mid]){
            l= mid+1;
        }else {
            r = mid-1;
        }
    }
    return l;

}
//int main(){
//
//    improve
//    vector<int> nums = {1};int target = 1;
//    cout<< searchInsert(nums,  target);
//    return 0;
//}
