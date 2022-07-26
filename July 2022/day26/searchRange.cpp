//
// Created by Hady Ahmed on 7/25/2022.
//
/*
██╗  ██╗ █████╗ ██████╗ ██╗   ██╗
██║  ██║██╔══██╗██╔══██╗╚██╗ ██╔╝
███████║███████║██║  ██║ ╚████╔╝
██╔══██║██╔══██║██║  ██║  ╚██╔╝
██║  ██║██║  ██║██████╔╝   ██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝    ╚═╝
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <utility>
#include <cstring>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {

    int start = 0,
            end = nums.size()-1,
            mid = -1;
    int pos = -1;

    while(start<=end){
        mid = (start+end)/2;
        if(nums[mid]==target)
        {
            pos = mid;
            break;
        }else if(nums[mid]>target){
            end= mid-1;
        }else{
            start = mid+1;
        }
    }
    vector<int> res ;
    if(pos==-1){
        res= {-1,-1};

    }
    else{
        int tmp =mid ;
        while (nums[tmp]==target){
            tmp--;
            if(tmp<0){
                res.push_back(tmp+1);
                break;
            }
            if(nums[tmp]!=target){
                res.push_back(tmp+1);
                break;
            }
        }
        tmp =mid ;
        while(nums[tmp]==target)
        {
            tmp++;
            if(tmp>=nums.size()){
                res.push_back(tmp-1);
                break;
            }
            if(nums[tmp]!=target){
                res.push_back(tmp-1);
                break;
            }
        }
    }
    for(auto it :res){
        cout<<it<<" ";
    }
    return res;
}
// other solution with stl :
vector<int> other(vector<int>& nums, int target) {
    auto low = lower_bound(nums.begin(),nums.end(),target);
    auto up = upper_bound(nums.begin(),nums.end(),target);

    if(!binary_search(nums.begin(),nums.end(),target))    return {-1,-1};

    int first = low - nums.begin();
    int last = up - nums.begin()-1;

    return {first ,last};
}
//int main(){
//
//    improve
//    vector<int> nums ={1}; int target=1;
//    searchRange(nums,target);
//    END
//    return 0;
//}
