//
// Created by Hady Ahmed on 7/2/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
int removeDuplicates(vector<int>& nums) {
    int a = 0;
    set<int> s ;
    for (int i = 0; i < nums.size(); ++i) {
        s.insert(nums[i]);
    }
    int i =0;
    for (auto it: s) {
        nums[i]= it;
        i++;

    }

    return s.size();

}
//int main() {
//    vector<int >nums ={1,1,1,2,2,2,2,2};
//    cout<<removeDuplicates(nums);
//
//    return 0;
//}
