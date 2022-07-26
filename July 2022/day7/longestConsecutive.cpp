//
// Created by Hady Ahmed on 7/5/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
int longestConsecutive(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    sort(nums.begin(),nums.end());
    int c =0;
    int c_so_far=0;
    for (int i = 0; i < nums.size()-1; ++i) {
        if(nums[i]+1==nums[i+1])
            c_so_far++;
        else{
            if(nums[i]==nums[i+1])
                continue;
            else
                c_so_far=0;

        }
        c = max(c,c_so_far);


    }
    return c+1;
}
//int main() {
//    vector<int> a ={9,1,4,7,3,-1,0,5,8,-1,6};
//    cout<<longestConsecutive(a);
//    return 0;
//}
