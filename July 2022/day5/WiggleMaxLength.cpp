//
// Created by Hady Ahmed on 7/3/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
int wiggleMaxLength(vector<int>& nums) {


    int a=1,b=1;
    for (int i = 1; i < nums.size(); ++i) {
        if(nums[i]>nums[i-1])b++;
        if(nums[i]<nums[i-1])a++;
    }
    cout<<max(a,b);
    return max(a,b);

}
//int main() {
//    vector<int> ww={1,17,5,10,13,15,10,5,16,8};
//    wiggleMaxLength(ww);
//    return 0;
//}
