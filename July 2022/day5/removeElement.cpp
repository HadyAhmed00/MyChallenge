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
int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    for (int i = 0; i < nums.size(); ++i) {
        if(nums[i]==val&&i<size){
            for (int j = i; j <nums.size()-1 ; ++j) {
                swap(nums[j],nums[j+1]);
            }
            size--;
            i--;
        }
    }
    for(auto it:nums){
        cout<<it<<" ";
    }

    cout<<endl;

    return size;

}
//int main() {
////    [0,1,4,0,3,_,_,_]
//    vector<int> ww={0,1,2,2,3,0,4,2};
//    cout<< removeElement(ww, 2);
//    return 0;
//}
